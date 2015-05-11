#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <string>
using std::string;

#include "..\Serialization\XMLSerialization.h"
using namespace xmls;

#include "..\User\User.h"
using Game1_User::User;

namespace Game1_Managers {
	class FileManager
	{
	private:
		string mFileName;
		User *user;
	protected:
	public:
		FileManager(string fileName);

		void WriteUserXMLFile(string);
		string ReadUserXMLFile();
		User* GetUser();
	};
}

#endif