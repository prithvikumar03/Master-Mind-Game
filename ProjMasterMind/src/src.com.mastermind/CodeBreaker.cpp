/*
 * CodeBreaker.cpp
 *
 *  Created on: Sep 4, 2016
 *      Author: root
 */

#include "CodeBreaker.h"
#include "Validator.h"

namespace std {

CodeBreaker::CodeBreaker() {
	// TODO Auto-generated constructor stub
	sCB_Guess = "";
	uiCB_CountGuess = 0;

}

CodeBreaker::~CodeBreaker() {
	// TODO Auto-generated destructor stub
}

unsigned int CodeBreaker::Set_Guess(string sInputGuess)
{
		sCB_Guess = sInputGuess;
		return 0;
}

string CodeBreaker::Get_Guess()
{

	return sCB_Guess;	//Return the last valid guess

}

} /* namespace std */
