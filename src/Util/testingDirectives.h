/*
 * testingDirectives.h
 *
 *  Created on: Mar 31, 2019
 *      Author: chur
 */

#ifndef SRC_TESTINGDIRECTIVES_H_
#define SRC_TESTINGDIRECTIVES_H_

#include <iostream>

#define FAIL() std::cout<<"failure in "<<__FILE__<<" in "<<__func__<<" at line "<<__LINE__<<std::endl
#define ASSERT(condition) do { if (!(condition)) { FAIL(); return 1; } } while(0)
#define VERIFY(test) do { int r=test(); totalTestsRun++; if(r) return r; } while(0)


#endif /* SRC_TESTINGDIRECTIVES_H_ */
