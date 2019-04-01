/*
 * testingDirectives.h
 *
 *  Created on: Mar 31, 2019
 *      Author: chur
 */

#ifndef SRC_TESTINGDIRECTIVES_H_
#define SRC_TESTINGDIRECTIVES_H_

#include <iostream>

#define FAIL() std::cout<<"failure in "<<__func__<<" line "<<__LINE__<<std::endl
#define ASSERT(condition) do { if (!(condition)) { FAIL(); return 1; } } while(0)
#define VERIFY(test) do { int r=test(); testsRun++; if(r) return r; } while(0)


#endif /* SRC_TESTINGDIRECTIVES_H_ */
