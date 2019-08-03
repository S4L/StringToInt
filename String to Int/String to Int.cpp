// Converting a string that contains number into an integer
// Written by Kha Tran

#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;


bool ContainAllDigits(string word) {
	for (int i = 0; i < word.size(); i++) {
		if (!isdigit(word[i])) {
			return false;
		}
	}
	return true;
}

void PressKeyToExit() {
	cout << "Press any key and the 'Enter' to exit";
	char hold;
	cin >> hold;
	
}

int ConvertStringToInt(string input) {

	const int zero = 48;
	int num = 0;
	int	exponentialNum; // exponential number for raising to power

	for (int i = 0; i < input.size(); i++)
	{
		exponentialNum = input.size() - (i + 1);

		// Using (int)word[i] to get the ASCII decimal value of each char "i" traverses through 
		num += pow(10, exponentialNum)*((int)input[i] - zero);
	}

	return num;
}

bool TryAgain() {

	char answer;
	cout << "Try Again? ";
	cin >> answer;

	if (answer == 'y' || answer == 'Y') {
		return true;
	}

	return false;
}

int main()
{
	string word;

	do {
		
		cout << "Please enter a string: ";
		cin >> word;

		// Check if string contains any letter
		if (!ContainAllDigits(word)) {
			cout << "Error: this string contains character(s) that is not number" << endl;
		}
		else {
			cout << "Number convert from string to int: " << ConvertStringToInt(word) << endl;
		}

	} while (TryAgain());

	// A pause to keep program from closing after finish execution
	PressKeyToExit();
	return 0;
}



