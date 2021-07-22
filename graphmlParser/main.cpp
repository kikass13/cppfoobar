#include <iostream>

#include "main.h"


int main()
{
    std::cout << "Starting ... \n";
    Config cfg;

    tinyxml2::XMLDocument doc;
    doc.LoadFile( "simple.graphml" );
    if(doc.Error())
    {
        std::cout << "Err: "<< doc.Error() << "\n" << doc.ErrorName();
        return 1;
    }

    tinyxml2::XMLElement* root = doc.FirstChildElement("graphml");
    if(root != NULL)
    {
        /// find necessary configuration keys
        std::cout << "Checking keys ...\n";
        tinyxml2::XMLElement* key=root->FirstChildElement("key");
        for(key; key != NULL; key=key->NextSiblingElement("key"))
            cfg.checkKeyElement(key);

        /// crawl through graph and set up tree
        std::cout << "Creating Nodes ...\n";
        tinyxml2::XMLElement* node=root->FirstChildElement("graph")->FirstChildElement("node");
        for(node; node != NULL; node=node->NextSiblingElement("node"))
        {
            cfg.checkNodeElement(node);
        }

        /// find necessary configuration keys
        std::cout << "Checking Connections ...\n";
        tinyxml2::XMLElement* edge=root->FirstChildElement("graph")->FirstChildElement("edge");
        for(edge; edge != NULL; edge=edge->NextSiblingElement("edge"))
            cfg.checkEdgeElement(edge);

        /// cfg object now has a list of all the relevant nodes which we could iterate
        for(auto node: cfg.nodeList)
        {
            std::cout << node;
        }
    }


    std::cout << "DONE ... ";
    return 0;
}
