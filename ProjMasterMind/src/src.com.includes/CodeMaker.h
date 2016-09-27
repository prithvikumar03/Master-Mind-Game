/*
 * CodeMaker.h
 *
 *  Created on: Sep 4, 2016
 *      Author: root
 */

#ifndef CODEMAKER_H_
#define CODEMAKER_H_

#include <string>
namespace std {

class CodeMaker {

private:
	std::string sCM_Code;
	std::string sCM_Hint;



public:
	CodeMaker();
	virtual ~CodeMaker();
	void Generate_Code();
	std::string Get_Code();
	std::string Get_Hint(std::string guess);
};

} /* namespace std */

#endif /* CODEMAKER_H_ */
