/*
 * FirstTests.cpp
 *
 *  Created on: Mar 31, 2019
 *      Author: chur
 */
#include "FirstTests.h"

FirstTests::FirstTests() {
	RegisterTests();
}

FirstTests::~FirstTests() {
	// TODO Auto-generated destructor stub
}

int FirstTests::FirstTest(){
	//SUTClass sutClass;
	//ASSERT(sutClass.Function() == 0);
	ASSERT(0 == 0);
	return 0;
}

int FirstTests::SecondTest(){
	//SUTClass sutClass;
	//ASSERT(sutClass.Function() == 0);
	ASSERT(0 != 1);
	return 0;
}

void FirstTests::RegisterTests(){
	testList.push_back(FirstTest);
	testList.push_back(SecondTest);
}
