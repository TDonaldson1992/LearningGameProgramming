#include <Windows.h>
#include <string>
#include <direct.h>
using namespace std;

#include "DirectoryManager.h"
using Game1_Managers::DirectoryManager;

#include "../Globals.h"
using Game1_Gloabls::Globals;

bool DirectoryManager::DirectoryExists(const string &DirectoryName) {
	DWORD ftyp = GetFileAttributesA(DirectoryName.c_str());
	if (ftyp == INVALID_FILE_ATTRIBUTES)
		return false;  //something is wrong with your path!

	if (ftyp & FILE_ATTRIBUTE_DIRECTORY)
		return true;   // this is a directory!

	return false;    // this is not a directory!
}

bool DirectoryManager::MakeDirectory(const string &DirectoryName) {

#if defined(_WIN32)
	_mkdir(DirectoryName.c_str());
#else
	mkdir(DirectoryName.c_str(), 0777);
#endif

	if (DirectoryExists(DirectoryName)) {
		return true;
	}
	else{
		return false;
	}
}

void DirectoryManager::CheckDirectories() {
	// Check for the default directory.
	if (!DirectoryExists(Globals::DEFAULT_LOCATION)) {
		MakeDirectory(Globals::DEFAULT_LOCATION);
	}

	// Check to see if the game's directory exists.
	if (!DirectoryExists(Globals::GAME_LOCATION)) {
		MakeDirectory(Globals::GAME_LOCATION);
	}
}