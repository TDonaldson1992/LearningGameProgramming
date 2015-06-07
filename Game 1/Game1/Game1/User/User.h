#ifndef USER_H
#define USER_H

#include <string>
using std::string;

#include <ctime>
using std::time_t;

#include "..\Serialization\XMLSerialization.h"
using namespace xmls;

namespace Game1_User 
{
	class User: public Serializable
	{
	private:
		xInt mUserId;
		xString mUsername;
		xString mPassword;
	protected:
	public:		
		User();
		User(xString, xString);
		User(xInt, xString, xString);

		xInt GetUserId();
		xString GetUsername();
		xString GetPassword();

		void SetUserId(xInt);
		void SetUsername(xString);
		void SetPassword(xString);
	
		void RegisterXML();
	};
}
#endif