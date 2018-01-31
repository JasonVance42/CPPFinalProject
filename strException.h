/*
Jason Vance
12/12/17
IDE: Visual Studio 2017
Final Project strException Header
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class strException
{
private:
	string message;					//variable to hold error message
public:
	strException(string newmsg);	//constructor with new message input
	string what() const;			//returns message
};

