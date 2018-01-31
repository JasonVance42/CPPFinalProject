/*
Jason Vance
12/12/17
IDE: Visual Studio 2017
Final Project strQue Class
*/

#include "stdafx.h"
#include "strQue.h"
#include "strException.h"

strQue::strQue()		//creates a strQue object that can store 10 strings
{
	data.resize(10);
}

strQue::strQue(int len)		//create a strQue object that can store len strings
{
	data.resize(len);
}

void strQue::add(string str)		//adds the parameter value to back end of the list
{
	data.push_back(str);
}

string strQue::remove()		//returns, and removes the value at the front of the list
{
	if (data.size() == 0)		//check if data has any entries
	{
		throw strException("ERROR No entry found to remove.");
	}

	string firstValue = data.front();		//get first value in list
	
	if (firstValue == "")		//check if entry is blank
	{
		throw strException("ERROR Entry is blank and can not be removed.");
	}
	
	data.pop_front();		//remove first value in list
	return firstValue;		//return first value in list

}

string strQue::firstinQue() const		//returns, but does not remove the 1st string in the strQue
{
	if (data.size() == 0)		//check if data has any entries
	{
		throw strException("ERROR No entry found.");
	}
	
	string firstValue = data.front();		//get first value in list
	
	if (firstValue == "")		//check if entry is blank
	{
		throw strException("ERROR Entry is blank.");
	}
	
	return firstValue;		//return first value in list
}

void strQue::printAll() const		//outputs all values in the strQue object
{
	for (auto iter = data.begin(); iter != data.end(); iter++)
	{
		cout << *iter << endl;
	}
}
