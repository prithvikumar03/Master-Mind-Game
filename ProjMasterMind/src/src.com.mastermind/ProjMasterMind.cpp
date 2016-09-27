//============================================================================
// Name        : ProjMasterMind.cpp
// Author      : Prithvi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "MasterMind.h"

using namespace std;

int main() {

	string sUser_Choice = "";
	string sHint = "";
	string sGuess = "";
	string uiNoOfGuess="";
	MasterMind oMM;

	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	cout << "Welcome to Master Mind:" << "\n" << "n:New Game\nq:Quit\ns:Set Number of Guess (default-12) \n";
	cout << "Enter your choice: \n";

	while (sUser_Choice != "n" && sUser_Choice != "q")
	{
		cin >> sUser_Choice;

		if(sUser_Choice == "s")
		{
			cout << "Enter number of guesses: \n";
			cin >> uiNoOfGuess;
			oMM.SetRules(uiNoOfGuess);		//Rules are set in the Master Mind class
		}

			cout << "Choose 'n' for new game or 'q' to quit \n";

	}

	if(sUser_Choice == "n")
	{
		oMM.IntiGame();		//Master Mind Init game generates a randon 4 digit (1 to 4) string
		cout << "Game Started, good luck in breaking the code \n";

	}
	else if(sUser_Choice == "q")
	{
		cout << "Goodbye";
		return 0;
	}

	//Instructions to the user
	cout << "To choose balls press\n 1:White Ball \n 2:Black Ball \n 3:Red Ball \n 4:Blue Ball\n ";
	cout << "Make your guess (4 balls): Enter your choice as one continous word\n To choose blue white red black, enter 4132 \n ";
	cout << "Hint Explanation: 2 -> couloured pin, 1 -> white pin, 0 -> no pin \n";
	do
	{

		cin >> sGuess;
		sHint = oMM.Play(sGuess);	//Validates the user input (less than 4 digits, invalid charactes etc, if all ok, generates a hint
		if(sHint.length() > 4)		//If there is message to user, it is greater length 4 and a different message is printed
		{
			cout << "Message to user: " << sHint << "\n";
		}
		else
		{
			cout << "Your Hint is: \n" << sHint << "\n";
		}



	}while(sHint != "success" && sHint != "gameover" && sGuess != "q");	//Game is played until user has guessed it correctly or gueeses have exceeded 12 or user quits


	cout << "Your final score is: " << oMM.GetScore() << "\n";		//Here final score (number of coloured pins = "2" are printed

	if(sHint == "gameover")
	{

		cout << "Code was :" << oMM.GetCode() << "\n";		//If user is not able to guess, then code is printed

	}

	return 0;
}
