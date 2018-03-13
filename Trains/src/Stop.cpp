/*
 * Stop.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Stop.h"
#include <iostream>

using namespace std;

Stop::Stop( int distance, std::string name) {
	distanceToNext = distance;
	this->name = name;
}

Stop::~Stop() {}


