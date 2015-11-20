// Reverse digits.cpp : Defines the entry point for the console application.
/*
				   Mason Salvas
	October 19, 2012

	Assignment reverse digits
	This will reverse digits that you input
	*/

	//#include "stdafx.h"
#include <iostream>

	using namespace std;

int reverse(int i);		//Reverses the number

int main()
{//Begin Main

	int response = 1;

	while (response == 1)			//This allows the user to run the program as much as you want 
	{

		int num, answer;


		cout << "Enter a number: ";
		cin >> num;

		answer = reverse(num);


		cout << answer;

		cout << endl;

		cout << "Would you like to run the program again? (1 for yes, 0 for no): ";
		cin >> response;

		cout << "\n" << endl;

	}

	return 0;
}//End Main


int reverse(int i)
{//Begin Reverse

	int answer = 0;

	while (i > 0)
	{
		answer = answer * 10 + i % 10;			//This is the declaration of the function
		i = i / 10;
	}

	return answer;
}//End Reverse