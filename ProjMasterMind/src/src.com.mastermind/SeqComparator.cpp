/*
 * SeqComparator.cpp
 *
 *  Created on: Sep 4, 2016
 *      Author: root
 */

#include "SeqComparator.h"
#include <iostream>

namespace std {

SeqComparator::SeqComparator() {
	// TODO Auto-generated constructor stub

}

SeqComparator::~SeqComparator() {
	// TODO Auto-generated destructor stub
}


std::string SeqComparator::Compute_Hint(std::string code, std::string guess)
{
	 string sValue_Ret = SeqComparator::Compare_Seq(code, guess);
	 if(sValue_Ret == "2222")	//2222 indicates that the code breaker guessed it correctly
		 sValue_Ret = "success";

	 return sValue_Ret;
}

std::string SeqComparator::Compare_Seq(std::string code, std::string guess)
{
	int i=0, location = -1;
	string sHint_Calc = "";
	//cout << "Guess is: " << guess << "\n";
	//cout << "Code is: " << code << "\n";
	for (i=0; i<4; i++)
	{
		location = code.find(guess.at(i));
		//cout << "Location is: " << location << "\n" << "Str to Find: " << code.find(guess.at(i)) << "\n";


		if(location == -1)
		{
			sHint_Calc.append("0");

		}
		else
		{
			code.replace(location, 1, "a");	//Replacing the matched element with 'a' so that it is not searched again
			//cout << "Replaced Code is: " << code << "\n";
			if(location == i)
			{
				sHint_Calc.append("2");

			}
			else
			{
				sHint_Calc.append("1");

			}

		}

	}
	return sHint_Calc;

}

} /* namespace std */
