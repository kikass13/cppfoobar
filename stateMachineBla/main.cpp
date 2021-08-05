#include <iostream>
#include <unordered_map>
#include <set>
#include <functional>
#include <tuple>


enum class Error : uint16_t{
    NO_ERROR = 0x0000,
    XOXO = 0x1337
};


class EventData{
    const Error* errors;
    size_t errorCount;
};


class Profile
{
public:
    friend class StateMachine;

public:
    /// CiA402 state transistion event handler for user code
    virtual bool onNotReadyToSwitchOn(const EventData* e) const {(void) e; std::cout << "onNotReadyToSwitchOn" << std::endl; return true;}
    virtual bool onSwitchOnDisabled(const EventData* e) const {(void) e; std::cout << "onSwitchOnDisabled" << std::endl; return true;}
    virtual bool onReadyToSwitchOn(const EventData* e) const {(void) e; std::cout << "onReadyToSwitchOn" << std::endl; return true;}
    virtual bool onSwitchedOn(const EventData* e) const {(void) e; return true;}
    virtual bool onOperationEnabled(const EventData* e) const {(void) e; return false;}
    virtual bool onQuickStop(const EventData* e) const {(void) e; return true;}
    virtual bool onFaultReaction(const EventData* e) const {(void) e; return true;}
    /// this can only be called when a state transition to fault is acknowledged after an EMCY message was received
    /// these EMCY messages (plural, multiple) have to be buffered until this event is fired
    virtual bool onFaultState(const EventData* e) const { (void) e; return false;}

};

enum class State : uint16_t
{
    NotReadyToSwitchOn,
    SwitchOnDisabled,
    ReadyToSwitchOn,
    SwitchedOn,
    OperationEnabled,
    QuickStopActive,
    FaultReactionActive,
    Fault
};

static const std::array<uint16_t, 8> StateIds
{
    0x0000, // NotReadyToSwitchOn
    0x0040, // SwitchOnDisabled
    0x0021, // ReadyToSwitchOn
    0x0023, // SwitchedOn
    0x0027, // OperationEnabled
    0x0007, // QuickStopActive
    0x000f, // FaultReactionActive
    0x0008 // Fault
};

struct TransitionData
{
        std::function<bool(const Profile*, const EventData*)> eventFunction = nullptr;
        State nextPositiveState;
        std::set<State> possibleTransitions;
};

static std::array<TransitionData, 8> TransitionLookup
{{
    // State::NotReadyToSwitchOn
    {
        [](const Profile* ctx, const EventData* e) { return ctx->onNotReadyToSwitchOn(e); }, 
        State::SwitchOnDisabled,
        std::set<State>{State::SwitchOnDisabled} 
    },
    // State::SwitchOnDisabled
    {
        [](const Profile* ctx, const EventData* e) { return ctx->onSwitchOnDisabled(e); }, 
        State::ReadyToSwitchOn,
        std::set<State>{State::ReadyToSwitchOn} 
    },
    // State::ReadyToSwitchOn
    {
        [](const Profile* ctx, const EventData* e) { return ctx->onReadyToSwitchOn(e); }, 
        State::SwitchedOn,
        std::set<State>{State::SwitchedOn, State::SwitchOnDisabled} 
    }
}};


/*
0	Reset	Initialize drive
1	Drive has initialized successfully	Activate communication
2	«Shutdown» command received	
3	«Switched on» command received	Initialize current sensor. Current offset calibration.
4	«Enable operation» command received	Enable drive function (enable current controller and, if needed, position or velocity controller)
5	«Disable operation» command received	Stop movement according to «Disable operation option code». Disable drive function.
6	«Shutdown» command received	Disable power section
7	«Quick stop» or «Disable voltage» command received	
8	«Shutdown» command received	Stop movement according to «Shutdown option code». Disable drive function and power section.
9	«Disable voltage» command received	Stop movement according to «Shutdown option code». Disable drive function and power section.
10	«Quick stop» or «Disable voltage» command received	
11	«Quick stop» command received	Stop movement according to «Quick stop option code»
12	«Disable voltage» command received	Disable drive function and power section
13	A fault has occured	Start fault reaction
14	The fault reaction is completed	Disable drive function and power section
15	«Fault reset» command received	Reset fault condition if no fault is present
16	«Enable operation» command received	
*/


// currentState : possible Transitions


class StateFactory{
public:
    static const uint16_t STATEMASK = 0x006f;
    static State create(uint16_t sw){
        auto itr = std::find(StateIds.begin(), StateIds.end(), sw & StateFactory::STATEMASK);
        uint16_t index = std::distance(StateIds.begin(), itr);
        return State{index};
    }
};

class StateMachine{
public:

public:
    StateMachine(Profile* ctx) : state_{State::NotReadyToSwitchOn}, context_{ctx}
    {
    }

    bool transit(const State& s)
    {
        bool success = false;

        if(s == this->getCurrentState())
            return false;

        auto& transitionData = TransitionLookup[(uint16_t)this->getCurrentState()];
        std::set<State>* possibleTransitions = &transitionData.possibleTransitions;
        auto nextStateIt = possibleTransitions->find(s);
        if(nextStateIt != possibleTransitions->end())
        {
            /// dont do this here, we want to asyncwrite the next state and do this on receive
            /// this is only for debugging
            this->setCurrentState(*nextStateIt);
            stateChangedEvent();
            success = true;
        }   
        return success;
    }
    const State& getCurrentState() const { return this->state_;}
    void setCurrentState(const State& s) { this->state_ = s;}
    const Profile* getContext() const {return this->context_;}
private:
    void stateChangedEvent()
    {
        bool autoTransitToNextState = false;
        auto& transitionData = TransitionLookup[(uint16_t)this->getCurrentState()];
        EventData e;
        if(transitionData.eventFunction != nullptr)
        {
            autoTransitToNextState = transitionData.eventFunction(this->getContext(), &e);
            if(autoTransitToNextState){
                this->transit(transitionData.nextPositiveState);
            }    
        }
    }
public:
private:
    Profile* context_;
    State state_;
};

int main(){
    Profile p;
    StateMachine m(&p);
    State s = StateFactory::create(0x0040);
    std::cout << "targetState: " << (int) s << std::endl;
    std::cout << "currentState: " << (int) m.getCurrentState() << std::endl;
    std::cout << "transition: " << std::endl;
    bool success = m.transit(s);
    std::cout << std::endl << "success: " << success << std::endl;
	std::cout << "currentState: " << (int) m.getCurrentState() << std::endl;


	return 0;
}