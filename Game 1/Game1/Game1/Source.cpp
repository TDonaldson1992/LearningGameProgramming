#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <Windows.h>
using namespace std;

#pragma region Header Includes

#include "User\User.h"
using Game1_User::User;

#include "Managers\FileManager.h"
#include "Managers\DirectoryManager.h"
using Game1_Managers::FileManager;
using Game1_Managers::DirectoryManager;

#include "Globals.h"
using Game1_Gloabls::Globals;

#pragma endregion

#pragma region Set Globals Class Static Variables
const string Globals::DEFAULT_LOCATION = "G:/Programming/";
const string Globals::GAME_LOCATION = Globals::DEFAULT_LOCATION + "Game1/";
const string Globals::USERS_FILE = Globals::GAME_LOCATION + "users.txt";
#pragma endregion

int main()
{
	DirectoryManager::CheckDirectories();

	FileManager *fm = new FileManager(Globals::USERS_FILE);
	User *user = new User();

	string xmlData = fm->ReadUserXMLFile();
	if (xmlData.length() == 0) {
		string username, password;
		cout << "Enter your name: ";
		cin >> username;

		cout << "Enter your password: ";
		cin >> password;


		user->SetPassword(password);
		user->SetUsername(username);

		cout << "Writing to file..." << endl << endl;
		fm->WriteUserXMLFile(user->toXML());
	}
	else {
		if (Serializable::fromXML(xmlData, user)) {
			cout << "Logging into Game 1..." << endl;
		}
	}

	cout << "Welcome, " << user->GetUsername().toString() << endl;

	system("pause");
	return 0;
}