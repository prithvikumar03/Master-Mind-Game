/*
 * Validator.h
 *
 *  Created on: Sep 4, 2016
 *      Author: root
 */

#ifndef VALIDATOR_H_
#define VALIDATOR_H_

#include <string>

namespace std {

class Validator {
public:
	Validator();
	virtual ~Validator();
	unsigned int Validate(std::string guess);
};

} /* namespace std */

#endif /* VALIDATOR_H_ */
