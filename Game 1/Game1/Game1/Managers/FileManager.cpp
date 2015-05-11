#include <string>
using std::string;

#include <fstream>
using std::ofstream;
using std::ifstream;

#include "FileManager.h"
using Game1_Managers::FileManager;

#include "..\Serialization\XMLSerialization.h";
using namespace xmls;

FileManager::FileManager(string fileName) {
	user = new User();
	mFileName = fileName;
}

void FileManager::WriteUserXMLFile(string xmlData) {
	ofstream xmlFile(mFileName);
	if (xmlFile.is_open()) {
		xmlFile << xmlData;
		xmlFile.close();
	}
}

string FileManager::ReadUserXMLFile() {
	string xmlData = "", line;
	ifstream xmlFile(mFileName);

	if (xmlFile.is_open()) {
		while (getline(xmlFile, line)) {
			xmlData += (line + '\n');
		}
	}

	return xmlData;
}

User* FileManager::GetUser() {
	return user;
}