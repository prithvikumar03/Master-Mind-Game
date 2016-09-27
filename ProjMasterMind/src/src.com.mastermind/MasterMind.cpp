/*
 * MasterMind.cpp
 *
 *  Created on: Sep 4, 2016
 *      Author: root
 */

#include "MasterMind.h"
#include <string>
#include <sstream>
#include <iostream>
namespace std {

MasterMind::MasterMind() {
	// TODO Auto-generated constructor stub
	uiMM_CountColouredHints=0;
	uiMM_NoOfGuess=12;
	uiMM_GuessCount = 0;

}

MasterMind::~MasterMind() {
	// TODO Auto-generated destructor stub
}

void MasterMind::IntiGame()
{

	oCM.Generate_Code();

}

string MasterMind::GetCode()
{

	return oCM.Get_Code();

}

std::string MasterMind::Play(std::string guess)
{

	string sReturnHint;
	if (oValidate.Validate(guess) == 0)		//Validate users input, if its ok, then set the guess and generate hint
	{
		if(uiMM_GuessCount < uiMM_NoOfGuess)		//If the code breaker has exceeded max tries, then return "gameover"
		{
			oCB.Set_Guess(guess);
			sReturnHint = oCM.Get_Hint(oCB.Get_Guess());
			CountScore(sReturnHint);				//Calculate the number of correct guesses
			uiMM_GuessCount += 1;
		}
		else
		{
			sReturnHint = "gameover";

		}

	}
	else
	{
		sReturnHint = "Invalid Guess, please try again";
	}

	return sReturnHint;

}


void MasterMind::SetRules(string NoOfGuess)
{
	std::istringstream iss(NoOfGuess);
	iss >> uiMM_NoOfGuess;
	cout << "Setrules: " << uiMM_NoOfGuess << "\n";

}

unsigned int MasterMind::GetRules()
{

	return uiMM_NoOfGuess;

}

void MasterMind::CountScore(string hint)	//This method counts the number of coloured pins in the hint which acts as the score
{
	int i=0;
	//std::(0, "2");
	if(hint == "success")	//If successfully guessed, then 4 points are added
	{
		uiMM_CountColouredHints +=4;
	}
	else
	{
		for (i=0; i<4; i++)
		{
			if(hint.at(i) == '2')
			{
				//check if coloured pin (equal to 2), then add 1
				uiMM_CountColouredHints ++;
			}
		}
	}


}

unsigned int MasterMind::GetScore()
{

	return uiMM_CountColouredHints;

}


} /* namespace std */
