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
#include <functional>
#include <tuple>
#include "../Interfaces/Test.h"
#include "../Util/testingDirectives.h"
#include "../Util/util.h"

//typedfs for the dependencies the tests will require
#include "Dependencies/firstTestsDependencies.h"
/////////////////////////////////////////////////////

class FirstTests : public Test<FirstTests>{
	void Setup();
	void RegisterTests();
public:
	FirstTests();
	virtual ~FirstTests();
	template<typename Tuple>
	static int FirstTest(Tuple dependencies);
};

#endif /* SRC_TESTS_FIRSTTESTS_H_ */
