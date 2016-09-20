/*
 * MaticeOne.cpp
 *
 *  Created on: 21. 9. 2016
 *      Author: Richard
 */

#include "MaticeOne.h"

MaticeOne::MaticeOne() {
	// TODO Auto-generated constructor stub
	for(int i = 0; i<5; i++)
		set(i, i, 1);
}

MaticeOne::~MaticeOne() {
	// TODO Auto-generated destructor stub
}

