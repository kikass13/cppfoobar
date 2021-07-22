#include <string>
#include <iostream>
#include <algorithm>
#include <unordered_map>

#include "tinyxml2.h"

class BTNode
{
public:
    enum class BT_TYPE{NONE, ROOT, SEQUENCE, FALLBACK, DECORATOR,      CONDITION, ACTION,     FUNCTION};
    static std::unordered_map<std::string, BT_TYPE> BT_TYPE_MAP;
    enum class BT_FUNCTION{NONE, TOPIC, SERVICE, ACTION,      FLIPFLOP, SET, RESET     , FALSE};
    static std::unordered_map<std::string, BT_FUNCTION> BT_FUNCTION_MAP;
    enum class BT_CONNECTION{NONE, HOOK};
    static std::unordered_map<std::string, BT_CONNECTION> BT_CONNECTION_MAP;

    void setTypeWithString(std::string typeStr);
    void setFunctionWithString(std::string functionStr);

    void setText(std::string text);

    std::string getTypeString();
    std::string getFunctionString();

    bool isValid();

    inline friend std::ostream& operator<<(std::ostream & _stream, BTNode & node) {
            _stream << "BTNode["<<node.id<<"]: " << node.getTypeString() <<", " << node.getFunctionString() << " > " << node.text << std::endl;
            for(auto child : node.children)
                _stream << " -- " << child->id << std::endl;
            for(auto hook : node.hooks)
                _stream << " -} " << hook->id << std::endl;
            return _stream;
        }


    BT_TYPE type = BT_TYPE::NONE;
    BT_FUNCTION function = BT_FUNCTION::NONE;
    std::string content = "";
    std::string id = "";
    std::string text = "";
    std::vector<BTNode*> children;
    std::vector<BTNode*> hooks;
};


class Config
{
public:
    static const std::string BT_ATTRIBUTE;
    static const std::string BT_TYPE_KEY;
    static const std::string BT_FUNCTION_KEY;
    static const std::string BT_CONNECTION_KEY;

    static const std::string YED_NODEGRAHPICS_ATTRIBUTE;
    static const std::string YED_NODEGRAHPICS_KEY ;

    std::string type_id = "";
    std::string function_id = "";
    std::string connection_id = "";
    std::string nodeGraphics_id = "";

    std::vector<BTNode> nodeList;

    bool checkKeyElement(tinyxml2::XMLElement* key);
    bool checkNodeElement(tinyxml2::XMLElement* node);
    bool checkEdgeElement(tinyxml2::XMLElement* edge);

    bool checkKey(std::string keyVal, std::string idVal);

    BTNode* findNodeById(std::string id);

};
