/*
Jason Vance
12/12/17
IDE: Visual Studio 2017
Final Project Wait List App
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include "strQue.h"
#include "strException.h"
using namespace std;

int main()
{
	bool keepRunning;		//program loop indicator
	char userChoice;		//user selection input
	string newName;			//variable to hold new name for list
	strQue waitList(0);		//new wait list with no entries at start

	keepRunning = true;		//initalize loop indicator to true

	while (keepRunning)
	{
		//get user choice
		cout << "What would you like to do?" << endl;
		cout << "(1) Add name to wait list" << endl;
		cout << "(2) View next name on list" << endl;
		cout << "(3) Seat next name on list" << endl;
		cout << "(4) View current wait list" << endl;
		cout << "(Q) Exit program" << endl;
		cin >> userChoice;
		cout << endl;

		switch (userChoice)
		{
		case '1':			//add name to list

			//get name to add to list
			cout << "Please enter name to add to list: ";
			cin >> newName;
			cout << endl;

			//add name to waitList
			waitList.add(newName);

			cout << newName << " has been added to the wait list." << endl << endl;

			break;

		case '2':			//view next name
			try
			{
				//display next name on list
				cout << waitList.firstinQue() << " is next on the list." << endl << endl;
			}
			catch (strException &err)
			{
				cout << err.what() << endl << endl;
			}

			break;

		case '3':			//view and remove next name on list

			try
			{
				//display message to user and remove name from list
				cout << waitList.remove() << " has been sat." << endl << endl;
			}
			catch (strException &err)
			{
				cout << err.what() << endl << endl;
			}

			break;

		case '4':			//print wait list

			cout << "Current wait list:" << endl;
			waitList.printAll();
			cout << endl;

			break;

		case 'q':
		case 'Q':			//exit program

			keepRunning = false;

			break;

		default:			//let user know they did not enter a valid selection

			cout << "ERROR Invalid input." << endl << "Please choose from list below." << endl << endl;

			break;
		}
	}

	cout << "Exiting Program" << endl;

    return 0;
}