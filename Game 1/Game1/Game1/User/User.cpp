#include "User.h"
using Game1_User::User;

#include <string>
using std::string;

#include <time.h>
using std::time_t;

#include "..\Serialization\XMLSerialization.h"
using namespace xmls;

User::User() {
	mUsername = "";
	mPassword = "";

	RegisterXML();
}

User::User(xString Username, xString Password) {
	mUsername = Username;
	mPassword = Password;

	RegisterXML();
}

xString User::GetUsername() {
	return mUsername;
}

xString User::GetPassword() {
	return mPassword;
}


void User::SetUsername(xString Username) {
	mUsername = Username;
}

void User::SetPassword(xString Password) {
	mPassword = Password;
}

void User::RegisterXML() {
	setClassName("Users");
	Register("Username", &mUsername);
	Register("Password", &mPassword);
	setVersion("2.1");
}