/*
 * FirstTests.cpp
 *
 *  Created on: Mar 31, 2019
 *      Author: chur
 */
#include "../Tests/FirstTests.h"

FirstTests::FirstTests() {
	Setup();
}

FirstTests::~FirstTests() {
	// TODO Auto-generated destructor stub
}

void FirstTests::Setup(){
}

void FirstTests::RegisterTests(){
//	AddTestToList<specificTestDependenciesType>(SpecificTest<specificTestDependenciesType>);
	AddTestToList<ftType>(FirstTest<ftType>);
}

template<typename Tuple>
int FirstTests::FirstTest(Tuple dependencies){
//	auto dependency1(std::get<Dependency1>(dependencies));
	//ASSERT(dependency1.Function() == 0);
	ASSERT(0 == 0);
	return 0;
}
