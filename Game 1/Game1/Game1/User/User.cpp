#include "User.h"
using Game1_User::User;

#include <string>
using std::string;

#include <time.h>
using std::time_t;

#include "..\Serialization\XMLSerialization.h"
using namespace xmls;

User::User() {
	mUserId = -1;
	mUsername = "";
	mPassword = "";

	RegisterXML();
}

User::User(xString Username, xString Password) {
	mUserId = -1;
	mUsername = Username;
	mPassword = Password;

	RegisterXML();
}

User::User(xInt UserId, xString Username, xString Password) {
	mUserId = UserId;
	mUsername = Username;
	mPassword = Password;

	RegisterXML();
}

xInt User::GetUserId() {
	return mUserId;
}

xString User::GetUsername() {
	return mUsername;
}

xString User::GetPassword() {
	return mPassword;
}

void User::SetUserId(xInt UserId) {
	mUserId = UserId;
}

void User::SetUsername(xString Username) {
	mUsername = Username;
}

void User::SetPassword(xString Password) {
	mPassword = Password;
}

void User::RegisterXML() {
	setClassName("Users");
	Register("UserId", &mUserId);
	Register("Username", &mUsername);
	Register("Password", &mPassword);
	setVersion("2.1");
}