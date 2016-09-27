/*
 * CodeMaker.cpp
 *
 *  Created on: Sep 4, 2016
 *      Author: root
 */

#include "CodeMaker.h"
#include "SeqComparator.h"
#include <time.h>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <cmath>

namespace std {

CodeMaker::CodeMaker() {
	// TODO Auto-generated constructor stub

	sCM_Code = "";
	sCM_Hint = "";
}

CodeMaker::~CodeMaker() {
	// TODO Auto-generated destructor stub
}

void CodeMaker::Generate_Code()
{

	unsigned int i=0, code = 0;
	stringstream ss;
	srand (time(NULL));
	for(i=0; i<4; i++)
	{
		code = code + (pow(10.0,i) * (rand()%4+1));	//Using random number generator to generate a code, each time multiplied by 10 power "i" and added to code
		//cout << "Code generated is: " << code << "\n";
	}
	ss << code;
	sCM_Code = ss.str();
	//cout << "Code generated is: " << sCM_Code << "\n";
}

std::string CodeMaker::Get_Code()
{
	return sCM_Code;

}

std::string CodeMaker::Get_Hint(std::string guess)
{
	SeqComparator oSeqCmp;
	sCM_Hint = oSeqCmp.Compute_Hint(sCM_Code,guess);

	return sCM_Hint;

}

} /* namespace std */

