/*
 * MasterMind.h
 *
 *  Created on: Sep 4, 2016
 *      Author: root
 */

#ifndef MASTERMIND_H_
#define MASTERMIND_H_
#include <string>
#include "CodeBreaker.h"
#include "CodeMaker.h"
#include "Validator.h"


namespace std {

class MasterMind {

private:
	CodeBreaker oCB;
	CodeMaker oCM;
	Validator oValidate;
	unsigned int uiMM_CountColouredHints;
	unsigned int uiMM_NoOfGuess;
	unsigned int uiMM_GuessCount;

public:
	MasterMind();
	virtual ~MasterMind();
	void SetRules(string NoOfGuess);
	unsigned int GetRules();
	void CountScore(string hint);
	unsigned int GetScore();
	string GetCode();
	void IntiGame();
	std::string Play(std::string guess);
};

} /* namespace std */

#endif /* MASTERMIND_H_ */
