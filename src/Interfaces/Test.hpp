/*
 * Test.hpp
 *
 *  Created on: Apr 18, 2019
 *      Author: chur
 */

#ifndef SRC_INTERFACES_TEST_HPP_
#define SRC_INTERFACES_TEST_HPP_

template<class DerivedClass>
template<typename Tuple>
Tuple Test<DerivedClass>::GetDependencies(){
	Tuple tuple;
	return tuple;
}

template<class DerivedClass>
template<typename DependencyTypes>
std::function<int(void)> Test<DerivedClass>::BuildTest(std::function<int(DependencyTypes)> test, DependencyTypes dependencies){
	std::function<int(void)> testLambda = [test, dependencies](){
		return test(dependencies);
	};
	return testLambda;
}

template<class DerivedClass>
template<typename DependencyTypes>
void Test<DerivedClass>::AddTestToList(std::function<int(DependencyTypes)> test){
	auto testLambda = Test<DerivedClass>::BuildTest<DependencyTypes>(test, Test<DerivedClass>::GetDependencies<DependencyTypes>());
	testList.push_back(testLambda);
}

#endif /* SRC_INTERFACES_TEST_HPP_ */
