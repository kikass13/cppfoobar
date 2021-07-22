
#include "types.h"

/// ###########################################################################
///                          G E N E R A L
/// ###########################################################################

/// STS KEYS
const std::string Config::BT_ATTRIBUTE= "attr.name";
const std::string Config::BT_TYPE_KEY = "bt_type";
const std::string Config::BT_FUNCTION_KEY = "bt_function";
const std::string Config::BT_CONNECTION_KEY = "bt_connection";
;
/// YED DEFAULT KEYS
/// ... <key for="node" id="d8" yfiles.type="nodegraphics"/>
const std::string Config::YED_NODEGRAHPICS_ATTRIBUTE = "yfiles.type";
const std::string Config::YED_NODEGRAHPICS_KEY = "nodegraphics";




std::unordered_map<std::string, BTNode::BT_TYPE> BTNode::BT_TYPE_MAP =
{   {"none", BTNode::BT_TYPE::NONE}, {"root", BTNode::BT_TYPE::ROOT},
    {"sequence", BTNode::BT_TYPE::SEQUENCE}, {"fallback", BTNode::BT_TYPE::FALLBACK}, {"decorator", BTNode::BT_TYPE::DECORATOR},
    {"condition", BTNode::BT_TYPE::CONDITION}, {"action", BTNode::BT_TYPE::ACTION},
    {"function", BTNode::BT_TYPE::FUNCTION},
};
std::unordered_map<std::string, BTNode::BT_FUNCTION> BTNode::BT_FUNCTION_MAP =
{   {"none", BTNode::BT_FUNCTION::NONE},
    {"topic", BTNode::BT_FUNCTION::TOPIC}, {"service", BTNode::BT_FUNCTION::SERVICE}, {"action", BTNode::BT_FUNCTION::ACTION},
    {"false", BTNode::BT_FUNCTION::FALSE},
    {"flipflop", BTNode::BT_FUNCTION::FLIPFLOP}, {"set", BTNode::BT_FUNCTION::SET}, {"reset", BTNode::BT_FUNCTION::RESET},
};
std::unordered_map<std::string, BTNode::BT_CONNECTION> BTNode::BT_CONNECTION_MAP =
{   {"none", BTNode::BT_CONNECTION::NONE}, {"hook", BTNode::BT_CONNECTION::HOOK},
};



/// ###########################################################################
///                          N O D E
/// ###########################################################################
void BTNode::setTypeWithString(std::string str)
{   ///lowercase the str
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    ///map onto all the types
    this->type = BTNode::BT_TYPE_MAP[str];
}
void BTNode::setFunctionWithString(std::string str)
{   ///lowercase the str
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    ///map onto all the types
    if(BT_FUNCTION_MAP.count(str) > 0) this->function = BTNode::BT_FUNCTION_MAP[str];
    else this->function = BTNode::BT_FUNCTION::NONE;
}
void BTNode::setText(std::string text){ this->text = text; }


std::string BTNode::getTypeString()
{
    for (auto it = BTNode::BT_TYPE_MAP.begin(); it != BTNode::BT_TYPE_MAP.end(); ++it)
        if (it->second == this->type){return it->first;}
    return "";
}
std::string BTNode::getFunctionString()
{
    for (auto it = BTNode::BT_FUNCTION_MAP.begin(); it != BTNode::BT_FUNCTION_MAP.end(); ++it)
        if (it->second == this->function){return it->first;}
    return "";
}
bool BTNode::isValid()
{
    return this->type != BTNode::BT_TYPE::NONE;
}

/// ###########################################################################
///                           C O N F I G
/// ###########################################################################
bool Config::checkKeyElement(tinyxml2::XMLElement* key)
{
    bool success = false;
    const char* attr = NULL;

    /// grab relevant attribute if possible
    if(attr == NULL)
        attr = key->Attribute(Config::BT_ATTRIBUTE.c_str());
    if(attr == NULL)
        attr = key->Attribute(Config::YED_NODEGRAHPICS_ATTRIBUTE.c_str());

    if(attr != NULL)
    {
        /// grab id
        const char* id = key->Attribute("id");
        if(id != NULL)
        {
            std::string keyVal = std::string(attr);
            std::string idVal = std::string(id);
            success = this->checkKey(keyVal, idVal);
        }
    }
    return success;
}


bool Config::checkNodeElement(tinyxml2::XMLElement* node)
{
    bool success = false;
    /// create node as a container to fill it with upcoming values
    BTNode btnode;
    /// grab node id tag
    std::string id = std::string(node->Attribute("id"));
    btnode.id = id;

    ///every node with a data field containing our extraced ids (example d4, d5) is valid
    tinyxml2::XMLElement* data=node->FirstChildElement("data");
    for(data; data != NULL; data=data->NextSiblingElement("data"))
    {
        const char* key = data->Attribute("key");
        if(key != NULL)
        {
            std::string keyStr = std::string(key);
            //std::cout << "keyString: " << keyStr << "\n";
            if(keyStr != "")
            {
                tinyxml2::XMLNode* contentNode = data->FirstChild();
                if(contentNode != NULL)
                {
                    std::string content = contentNode->Value();
                    if(keyStr.compare(this->type_id) == 0)
                        btnode.setTypeWithString(content);
                    else if(keyStr.compare(this->function_id) == 0)
                        btnode.setFunctionWithString(content);
                    else if(keyStr.compare(this->nodeGraphics_id) == 0)
                    {
                        ///parse nodeLabel and set it to node
                        ///try to gather node label data
                        /// <data key="d8">
                        ///     <y:ShapeNode>
                        ///         <y:Geometry height="50.0" width="150.0" x="3534.269362001729" y="2586.810392929158"/>
                        ///         <y:Fill color="#E8EEF7" color2="#8775E6" transparent="false"/>
                        ///         <y:BorderStyle color="#000000" raised="false" type="line" width="1.0"/>
                        ///         <y:NodeLabel alignment="center" autoSizePolicy="content" fontFamily="Dialog" fontSize="14" fontStyle="plain" hasBackgroundColor="false" hasLineColor="false" height="20.296875" horizontalTextPosition="center" iconTextGap="4" modelName="custom" textColor="#000000" verticalTextPosition="bottom" visible="true" width="131.845703125" x="9.0771484375" y="14.8515625">someSrvCondition<y:LabelModel>
                        ///             <y:SmartNodeLabelModel distance="4.0"/>
                        tinyxml2::XMLElement* nodeLabel = data->FirstChildElement()->FirstChildElement("y:NodeLabel");
                        std::string nodeText = std::string(nodeLabel->GetText());
                        //std::cout << nodeLabel->GetText() << std::endl;
                        btnode.setText(nodeText);
                    }
                    else{}
                }


            }
        }
    }
    /// check if the created node is valid and add it to list if true
    if(btnode.isValid())
    {
       // std::cout << "Found valid node: " << btnode.getTypeString() << std::endl;
       this->nodeList.push_back(btnode);
    }
    return success;
}

bool Config::checkEdgeElement(tinyxml2::XMLElement* edge)
{
    const char* source = edge->Attribute("source");
    const char* target = edge->Attribute("target");

    bool isHook = false;

    if(source != NULL && target != NULL)
    {
        BTNode* sourceNode = this->findNodeById(source);
        BTNode* targetNode = this->findNodeById(target);
        /// only add edges between relevant nodes
        if(targetNode != NULL && sourceNode != NULL)
        {
            ///default edge type is a connector between two nodes
            /// check if this is a special hook thingy
            /// <edge id="e16" source="n19" target="n14">
            ///     <data key="d10"><![CDATA[hook]]></data>
            tinyxml2::XMLElement* data=edge->FirstChildElement("data");
            for(data; data != NULL; data=data->NextSiblingElement("data"))
            {
                const char* key = data->Attribute("key");
                if(key != NULL)
                {
                    std::string keyStr = std::string(key);
                    if(keyStr != "")
                    {
                        tinyxml2::XMLNode* contentNode = data->FirstChild();
                        if(contentNode != NULL)
                        {
                            /// we either found a hook or we didnt
                            std::string content = contentNode->Value();
                            if(keyStr.compare(this->connection_id) == 0)
                            {
                                isHook = true;
                                break;
                            }
                        }
                    }
                }
            }

            ///if we are a hook, we want to add the connection to special hooks list
            /// else it is a normal connection between two relevant nodes which will be added to children list
            if(isHook == true)
                sourceNode->hooks.push_back(targetNode);
            else
                sourceNode->children.push_back(targetNode);
        }
    }
}

BTNode* Config::findNodeById(std::string id)
{
    for(int i=0; i < this->nodeList.size(); i++)
    {
        BTNode* node = &this->nodeList[i];
        if(node->id.compare(id) == 0)
            return node;
    }
    return NULL;
}


bool Config::checkKey(std::string key, std::string id)
{
    bool success = true;
    if(key.compare(Config::BT_TYPE_KEY) == 0)
    {
        std::cout << "Found " << Config::BT_TYPE_KEY << " with id " << id << std::endl;
        this->type_id = id;
    }
    else if(key.compare(Config::BT_FUNCTION_KEY) == 0)
    {
        std::cout << "Found " << Config::BT_FUNCTION_KEY << " with id " << id << std::endl;
        this->function_id = id;
    }
    else if(key.compare(Config::BT_CONNECTION_KEY) == 0)
    {
        std::cout << "Found " << Config::BT_CONNECTION_KEY << " with id " << id << std::endl;
        this->connection_id = id;
    }
    else if(key.compare(Config::YED_NODEGRAHPICS_KEY) == 0)
    {
        std::cout << "Found " << Config::YED_NODEGRAHPICS_KEY << " with id " << id << std::endl;
        this->nodeGraphics_id = id;
    }
    else
    {
        success = false;
    }
    return success;
}
