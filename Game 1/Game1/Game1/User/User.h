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
		xString mUsername;
		xString mPassword;
	protected:
	public:		
		User();
		User(xString, xString);

		xString GetUsername();
		xString GetPassword();

		void SetUsername(xString);
		void SetPassword(xString);
	
		void RegisterXML();
	};
}
#endif