#include <iostream>
#include <cstdlib>
#include "FileManager\FileManager.hpp"
#include "Graphics\GraphicsFunc.hpp"
//#include "GraphicsHandler\GraphicsHandler.hpp"

using namespace std;


int main(){


thread Graphics(GraphicHandler::GraphicsBegin);

Graphics.join();


CFGFileManager::game.loadInitialConfig();

return 0;


}
