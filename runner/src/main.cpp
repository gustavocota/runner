/*
 * main.cpp
 *
 *  Created on: Mar 31, 2019
 *      Author: chur
 */
#include <iostream>
#include <vector>
#include <string>
//The entry point of the application to be tested
//#include "sut.h"
/////////////////////////////////////////////////

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
	//testList.push_back(AdderCosa);
	//testList.push_back(AdderCasa);
	for(int(*test)() : testList){
		VERIFY(test);
	}
	return 0;
}

int main(int argc, char **argv) {
	std::cout<<"Registering tests"<<std::endl;
	//Code to call register function on all test classes
	FirstTests adderTests;
	////////////////////////////////////////////////////
	int result = RunAllTests();
	if (result == 0)
		std::cout<<"PASSED"<<std::endl;
	std::cout<<"Tests run: "<<testsRun<<std::endl;

	return result != 0;
}


