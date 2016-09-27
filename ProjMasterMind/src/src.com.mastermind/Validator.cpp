/*
 * Validator.cpp
 *
 *  Created on: Sep 4, 2016
 *      Author: root
 */

#include "Validator.h"
#include <iostream>
namespace std {

Validator::Validator() {
	// TODO Auto-generated constructor stub

}

Validator::~Validator() {
	// TODO Auto-generated destructor stub
}

unsigned int Validator::Validate(std::string guess)
{
	int i = 0;
	if(guess.length() != 4)	//If length is not equal to 4, then its a invalid guess
	{
		return 1;
	}
	else
	{
		for(i=0;i<4;i++)
		{

			//cout << guess.at(i);
			if(guess.at(i) != '1' && guess.at(i) != '2' && guess.at(i) != '3' && guess.at(i) != '4')
				return 1;
		}
	}
	return 0;

}

} /* namespace std */
