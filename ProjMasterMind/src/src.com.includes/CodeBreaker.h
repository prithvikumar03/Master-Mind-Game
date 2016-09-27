/*
 * CodeBreaker.h
 *
 *  Created on: Sep 4, 2016
 *      Author: root
 */

#ifndef CODEBREAKER_H_
#define CODEBREAKER_H_

#include <string>
namespace std {

class CodeBreaker {

private:
	std::string sCB_Guess;
	unsigned int uiCB_CountGuess;

public:
	CodeBreaker();
	virtual ~CodeBreaker();
	unsigned int Set_Guess(std::string sGuessInput); //Takes user input and validates, if OK sets the sGuess variable. Returns error code.
	std::string Get_Guess();
};

} /* namespace std */

#endif /* CODEBREAKER_H_ */
