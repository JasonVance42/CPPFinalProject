/*
Jason Vance
12/12/17
IDE: Visual Studio 2017
Final Project strException Class
*/

#include "stdafx.h"
#include "strException.h"

strException::strException(string newmsg)		//constructor with new message input
{
	message = newmsg;
}

string strException::what() const				//returns message
{
	return message;
}