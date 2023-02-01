/* Author:      Nathan Smith (nathansmith11@my.unt.edu) 
   Date: 	February 16, 2022
   Instructor: 	Dr. PRadhumna Shrestha
   Description: This program will indicate whether or not the user's input is acceptable having a capital letter and a period and if not there will be changes being made to have the the first hracter upper cased and the string ending with a period.
 */
#include <iostream>
#include <cctype>
#include <stdio.h>
#include <string>

using namespace std;
int main()
{
	string userInput;

	bool strvar = true;
	char period = '.';

	printf("Enter string: \n");
	
	//getting the user's input
	getline(cin, userInput);
	
	int length = userInput.length();

	//if statement checking if the first chracter of the string is an alphabet
	if (isalpha(userInput.at(0))){
		
		//if statement checking if the first character is uppecased
		if(toupper(userInput.at(0)) == userInput.at(0)) {
			
			strvar = false;
		}
	
		else {
			cout << "The first character must be an uppercase alphabet.\n";
			userInput.at(0) = toupper(userInput.at(0));
			strvar = true;
		}	
	}

	else {
		cout << "The first character must be an alphabet\n";
		strvar = true;
	}
	
	//if statement checking if the if there is a period at the of the user's string
	if(userInput.at(length-1) == period) {
		strvar = true;
	}

	else {
		cout << "The last character must be a period.\n";
		userInput += period;
		strvar = false;
	}
	
	//if statement if the user's string has no errors
	if(strvar == true) {

		cout << "There are no errors in the string\n";
	}

	cout << userInput << endl;	



	return 0;
}
