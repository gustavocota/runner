/*
 * main.cpp
 *
 *  Created on: Mar 31, 2019
 *      Author: chur
 */
#include <functional>
#include <iostream>
#include <vector>
#include <string>

//variables to keep track of testing
int testsRun = 0;
std::vector<int(*)()> testList;
////////////////////////////////////

//The core directives that execute the tests
#include "testingDirectives.h"
////////////////////////////////////////////

//List of actual tests
#include "tests/FirstTests.h"
//////////////////

int RunAllTests() {
	for(int(*test)() : testList){
		VERIFY(test);
	}
	return 0;
}

int main(int argc, char **argv) {
	std::cout<<"Registering tests"<<std::endl;
	//Code to call register function on all test classes
	FirstTests firstTests;
	////////////////////////////////////////////////////
	int result = RunAllTests();
	if (result == 0)
		std::cout<<"PASSED"<<std::endl;
	std::cout<<"Tests run: "<<testsRun<<std::endl;

	return result != 0;
}


