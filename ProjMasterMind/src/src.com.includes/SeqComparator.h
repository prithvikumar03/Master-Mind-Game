/*
 * SeqComparator.h
 *
 *  Created on: Sep 4, 2016
 *      Author: root
 */

#ifndef SEQCOMPARATOR_H_
#define SEQCOMPARATOR_H_

#include <string>

namespace std {

class SeqComparator {
public:
	SeqComparator();
	virtual ~SeqComparator();
	std::string Compute_Hint(std::string code, std::string guess);
	std::string Compare_Seq(std::string code, std::string guess);
};

} /* namespace std */

#endif /* SEQCOMPARATOR_H_ */
