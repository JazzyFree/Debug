// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));          // need random number generator
	int BinaryAIsearchGridHighNumber = 64; // The high end of guess search
	int randomAIsearchGridHighNumber = 64;
	int HumansearchGridHighNumber = 64;
	int linearAIsearchGridHighNumber = 64;
	int HumansearchGridLowNumber = 1;
	int BinaryAIsearchGridLowNumber = 1; // Low end of guess search
	int randomAIsearchGridLowNumber = 1;
	int linearAIsearchGridLowNumber = 1;
	int BinaryAItargetLocationPrediction = 0;
	int	HumantargetLocationPrediction = 0;
	int randomAItargetLocationPrediction = 0;
	int linearAItargetLocationPrediction = 0;
	int enemylocation = rand() % 64 + 1; // The random number //stays the same 
	int BinaryAIOfAttempts = 0;
	int HumanOfAttempts = 0;
	int randomAIOfAttempts = 0;
	int linearAIOfAttempts = 0;
	//State if enemy found 
	//
	bool BinaryAiisEnemyFound = false;
	bool isEnemyFoundByHuman = false;
	bool IsEnemyFoundByRandomAI = false;
	bool isEnemyFoundByLinearAI = false;
	// the intro for the user 
	cout << "\Genrate Random enemy location on 8x8 grid....\n\n";
	cout << "\The enemy is located at location #32 on 8x8 grid with 1-64 sectors.\n\n";
	cout << "\Skynet HK-Aerial Initialing software.....\n\n";
	cout << "\===============================================\n\n";


	//******************************Start Human Player Here*********************************
	// todo human player
	cout << "Welcome Human Player NOW its your turn!" << endl;
	do
	{
		// tell the user not AI, the enemy location
		cout << "\nThe enemy is hiding at location #" << enemylocation << endl;

		// the human guess
		cout << "Enter Target location prediction:";
		cin >> HumantargetLocationPrediction;

		cout << "Human Drone Target location prediction is at location #" << HumantargetLocationPrediction << endl;
		// count attempts to find the enemy 	
		cout << "Human Pilot Skynet HK-Aerial attempt number" << ++HumanOfAttempts << "attempts." << "\n";
		if (HumantargetLocationPrediction > enemylocation)
		{
			cout << "Prediction is too high." << endl;


		}
		// if the guess is to low it does this
		else if (HumantargetLocationPrediction < enemylocation)
		{
			//tell if the guess is too low
			cout << "Prediction is too low." << endl;
		}
		else if (HumantargetLocationPrediction == enemylocation)
		{
			// the enemy found! change the flag to true
			isEnemyFoundByHuman = true;
		}
	} while (!isEnemyFoundByHuman);
	// display at the end 
	cout << "Enemy Found by Human Drone!" << endl;
	cout << "Human search took " << HumanOfAttempts << " tries to find location.";
	system("pause");

	//******************************Start AI binary Player Here*********************************

	cout << "Welcome Binary AI Player Its your time!" << endl;

	system("pause");

	do
	{
		// tell the user not AI, the enemy location
		cout << "\nThe enemy is hiding at location #" << enemylocation << endl;

		// the binary guess 
		BinaryAItargetLocationPrediction = ((BinaryAIsearchGridHighNumber - BinaryAIsearchGridLowNumber) / 2) + BinaryAIsearchGridLowNumber;  // random number between 1 and 64
		cout << "Target location prediction is at location #" << BinaryAItargetLocationPrediction << endl;
		// count attempts to find the enemy 	
		cout << "Skynet HK-Aerial attempt number" << ++BinaryAIOfAttempts << "attempts." << "\n";
		if (BinaryAItargetLocationPrediction > enemylocation)
		{
			cout << "Attempt too high, The search range high number " << BinaryAIsearchGridHighNumber << " will now change to";

			BinaryAIsearchGridHighNumber = BinaryAItargetLocationPrediction - 1;

			cout << BinaryAIsearchGridHighNumber << endl;
		}
		// if the guess is to low it does this
		else if (BinaryAItargetLocationPrediction < enemylocation)
		{
			cout << "Attempts too Low. The search range low number of " << BinaryAIsearchGridLowNumber << " will be changed to";
			// show the user the new value 
			BinaryAIsearchGridLowNumber = BinaryAItargetLocationPrediction + 1;
			cout << BinaryAIsearchGridLowNumber << endl;
		}
		else if (BinaryAItargetLocationPrediction == enemylocation)
		{
			// the enemy found! change the flag to true
			BinaryAiisEnemyFound = true;
		}
	} while (!BinaryAiisEnemyFound);
	// display at the end
	cout << "Enemy Found!" << endl;
	cout << "Skynet HK- Aerial Software took " << BinaryAIOfAttempts << " tries to find location.";
	system("pause");
     
      // ***********************AI Random Player************************************************** 
	
	cout << "Welcome Random AI player its your turn!" << endl;
	system("pause");

	do
	{
		// tell the user not AI, the enemy location
		cout << "\nThe enemy is hiding at location #" << enemylocation << endl;

		 randomAItargetLocationPrediction = rand() % 64 + 1; 

		cout << "Random AI Drone Target location prediction is at location #" << randomAItargetLocationPrediction << endl;
		// count attempts to find the enemy 	
		cout << "Random AI Pilot Skynet HK-Aerial attempt number" << ++randomAIOfAttempts << "attempts." << "\n";
		if (randomAItargetLocationPrediction > enemylocation)
		{
			cout << "Prediction is too high." << endl;


		}
		// if the guess is to low it does this
		else if (randomAItargetLocationPrediction < enemylocation)
		{
			//tell if the guess is too low
			cout << "Prediction is too low." << endl;
		}
		else if (randomAItargetLocationPrediction == enemylocation)
		{
			// the enemy found! change the flag to true
			IsEnemyFoundByRandomAI = true;
		}
	} while (!IsEnemyFoundByRandomAI);
	// display at the end 
	cout << "Enemy Found by Random Drone!" << endl;
	cout << "Random AI search took " << randomAIOfAttempts << " tries to find location.";
	system("pause");
	
	
	// Todo: Add Linear AI player 
	cout << "Welcome Linear AI player its your turn!" << endl;
	system("pause");
	do
	{
		// tell the user not AI, the enemy location
		cout << "\nThe enemy is hiding at location #" << enemylocation << endl;

		linearAItargetLocationPrediction = linearAItargetLocationPrediction + 1;

		cout << "Linear AI Drone Target location prediction is at location #" << linearAItargetLocationPrediction << endl;
		// count attempts to find the enemy 	
		cout << "Linear AI Pilot Skynet HK-Aerial attempt number" << ++linearAIOfAttempts << "attempts." << "\n";
		if (linearAItargetLocationPrediction > enemylocation)
		{
			cout << "Prediction is too high." << endl;


		}
		// if the guess is to low it does this
		else if (randomAItargetLocationPrediction < enemylocation)
		{
			//tell if the guess is too low
			cout << "Prediction is too low." << endl;
		}
		else if (linearAItargetLocationPrediction == enemylocation)
		{
			// the enemy found! change the flag to true
			isEnemyFoundByLinearAI = true;
		}
	} while (!isEnemyFoundByLinearAI);
	// display at the end 
	cout << "Enemy Found by Random Drone!" << endl;
	cout << "Linear AI search took " << randomAIOfAttempts << " tries to find location.";
	system("pause");

	// Todo: Summary of who won and how everyone did 
	cout << "\n\nReady for Summary Results:" << endl;

	
	cout << "Human search took " << HumanOfAttempts << " tries to find location." << endl;


	
	cout << "Skynet HK- Aerial Software took " << BinaryAIOfAttempts << " tries to find location." << endl;


	cout << "Random AI search took " << randomAIOfAttempts << " tries to find location." << endl;



	cout << "Linear AI search took " << randomAIOfAttempts << " tries to find location." << endl;



	// pause screen so user can see
	system("pause");
	return 0;

}