/*
 * FirstTests.h
 *
 *  Created on: Mar 31, 2019
 *      Author: chur
 */

#ifndef SRC_TESTS_FIRSTTESTS_H_
#define SRC_TESTS_FIRSTTESTS_H_

//references to System Under Test
//#include <sut.h>
/////////////////////////////////
#include <vector>
#include "../testingDirectives.h"

extern std::vector<int(*)()> testList;

class FirstTests {
	void RegisterTests();
public:
	FirstTests();
	virtual ~FirstTests();
	static int FirstTest();
	static int SecondTest();
};

#endif /* SRC_TESTS_FIRSTTESTS_H_ */
