// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{// The players information
// Artifact is the pieces need to be found in the quest
//quests stores the number of quests they endure

	const int ARTIFACTS = 4;
	int quests, killed, survivors;
	string leader;
	cout << "Welcome to Jumanji\n\n";
	cout << "Please enter the following for your quests\n";

	cout << "Enter a number: ";
	cin >> quests;

	cout << "Enter a number, smaller than the first:";
	cin >> killed;

	survivors = quests - killed;

	cout << "Enter your last name: ";
	cin >> leader;
	// tell the story Jumanji
	cout << "\nA funny group of" << quests << "teleported on a adventure";
	cout << "-- to find a way out they have to find a hidden tomb.";
	cout << "The group started to follow a lead on a near by statue," << leader << ".\n";
	cout << "\nAlong the way, They incounter wild animals and unhuman creatures";
	cout << "Some fought brave under the command of " << leader;
	cout << "All the wild animals was defeated but at a cost.";
	cout << "of the quests," << killed << " were defeated,";
	cout << "Only leaving" << survivors << "in the team.\n";
	cout << "\nThe group was starting to get scared.";
	cout << "After the fight they saw a cave,";
	cout << "they found the tomb but there was a puzzle to open.";
	cout << "So the team slit up  " << ARTIFACTS << "artifact.";
	cout << leader << "use the artifact" << (ARTIFACTS % survivors);
	cout << "To open each part of the tomb.\n";

	return 0;
}

