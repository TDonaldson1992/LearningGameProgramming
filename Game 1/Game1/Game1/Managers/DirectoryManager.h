#ifndef DIRECTORYMANAGER_H
#define DIRECTORYMANAGER_H
#include <string>
#include <Windows.h>
#include <direct.h>
using namespace std;

#include "../Globals.h"
using Game1_Gloabls::Globals;

namespace Game1_Managers {
	class DirectoryManager
	{
	private:
	protected:
	public:
		static bool DirectoryExists(const string &);
		static bool MakeDirectory(const string &);
		static void CheckDirectories();
	};

}
#endif