#ifndef FileManager
#define FileManager
#endif

class CFGFileManager {

	public:

	static CFGFileManager game;

	void loadInitialConfig();
	void generateConfig();
	void readFromJSON();

};

