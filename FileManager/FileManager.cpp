#include "FileManager.hpp"
#include <iostream>
#include <string>
#include "CFG/libconfig.h++"



void loadInitialConfig(){

        //define config containers
        //rapidxml::xml_document<> *xml_parsed[30];

        std::FILE* MainConfig;
        std::FILE* Tasks;
        std::FILE* NpcList;

        try{
		MainConfig = fopen("config.json", "r+");
        Tasks = fopen("tasks.json", "r+");
        NpcList = fopen("npclist.json", "r+");
	   }
	   catch(...){
        throw;
	   }



}


void generateConfig(){

}
