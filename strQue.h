/*
Jason Vance
12/12/17
IDE: Visual Studio 2017
Final Project strQue Header
*/

#include<iostream>
#include<string>
#include<list>
using namespace std;

class strQue
{
private:
	list<string> data;			//list object of strings
public:
	strQue();					//creates a strQue object that can store 10 strings
	strQue(int len);			// create a strQue object that can store len strings
	void add(string str);		// adds the parameter value to back end of the list
	string remove();			//removes the value at the front of the list
	string firstinQue() const;	//returns, but does not remove the 1st string in the strQue
	void printAll() const;		//outputs all values in the strQue object
};

