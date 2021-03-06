// Skynet HK-Aerial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));          // need random number generator
	int searchGridHighNumber = 64;
	int searchhGridLowNumber = 1;
	int targetLocationPrediction = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;  // random number between 1 and 64
	int tries = 0;
	int guess;


	cout << "\Genrate Random enemy location on 8x8 grid....\n\n";
	cout << "\The enemy is located at location #32 on 8x8 grid with 1-64 sectors.\n\n";
	cout << "\Skynet HK-Aerial Initialing software.....\n\n";
	cout << "\===============================================\n\n";
	

	do
	{
		cout << "Enter a guess:";
		cin >> guess;
		++tries;
		if (guess > targetLocationPrediction)
		{
			cout << "Too high!\n\n";
		}
		else if (guess < targetLocationPrediction)
		{
			cout << "Too low!\n\n";
		}
		else
		{
			cout << "\nThat's it! You got it in " << tries
				<< "guesses!\n";
		}
	} while (guess != targetLocationPrediction);
	return 0;
     
}

