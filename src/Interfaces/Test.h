/*
 * Test.h
 *
 *  Created on: Apr 18, 2019
 *      Author: chur
 */

#ifndef SRC_INTERFACES_TEST_H_
#define SRC_INTERFACES_TEST_H_

#include <functional>
#include <tuple>
#include <vector>
#include "../Util/util.h"

extern std::vector<std::function<int(void)>> testList;

template <class DerivedClass>
class Test {
protected:
	void SetUp();
	void RegisterTests();
public:
	Test<DerivedClass>();
	template<typename Tuple>
	Tuple GetDependencies();
	template<typename DependencyTypes>
	std::function<int(void)> BuildTest(std::function<int(DependencyTypes)> test, DependencyTypes dependencies);
	template<typename DependencyTypes>
	void AddTestToList(std::function<int(DependencyTypes)> test);
};

#include "Test.hpp"

#endif /* SRC_INTERFACES_TEST_H_ */
