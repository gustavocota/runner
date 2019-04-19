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
std::vector<std::function<int(void)>> testList;
////////////////////////////////////

//The core directives that execute the tests
#include "Util/testingDirectives.h"
////////////////////////////////////////////

//List of actual tests
#include "Tests/FirstTests.h"
//////////////////

int RunAllTests() {
	for(std::function<int(void)>test : testList){
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


