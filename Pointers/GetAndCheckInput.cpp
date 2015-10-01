/**********************************************************************
* AUTHOR		: coutOfCristo
* STUDENT ID	: 756566
* Lab #2	    : Random Number Generator
* CLASS		    : CS 1C
* SECTION		: MW 5:30p - 9:00
* DUE DATE		: 08/24/2015
**********************************************************************/

#include "Header.h"

/***********************************************************************
* GetAndCheckInput Function
* ----------------------------------------------------------------------
* This function gets and check integer input based on bounds
* ----------------------------------------------------------------------
* INPUT
*  UPPER_LIMIT  : upper bounds range that can be used as input
*  LOWER_LIMIT  : lower value range that can be used as input
*
* OUPUT
* 	Retunrs proper input to calling function
***********************************************************************/
int GetAndCheckInput(const int UPPER_LIMIT, const int LOWER_LIMIT)
{
	int menuOption;
	bool invalid;		//CALC - T/F for invalid input




	//PROCESSING - DO-WHILE LOOP - Used to output the the menu, prompt the
	//			   user for a selection and error check input.
	do
	{
		//CALC - Initialized invalid to false
		invalid = false;

		cout << "\nPlease enter an option: ";

		//INPUT - Prompts the user for their selection
		//PROCESSING - IF-THEN-ELSIF STATEMENT - Used to error check the
		//			   input and and output error messages if a non-integer
		//			   digit is entered or if the selection is outside of
		//			   the allowed range
		if (!(cin >> menuOption))
		{
			cout << endl;
			cout << "**** Please input a number between " << LOWER_LIMIT
				<< " and " << UPPER_LIMIT << " ****"
				<< endl << endl;

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
		else if (menuOption < LOWER_LIMIT || menuOption > UPPER_LIMIT)
		{
			cout << endl << "**** The number " << menuOption << " is an "
				<< "invalid entry.     ****" << endl
				<< "**** Please input a number between " << LOWER_LIMIT
				<< " and " << UPPER_LIMIT << " ****" << endl << endl;
			invalid = true;
		}
	} while (invalid);

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	return menuOption;
}