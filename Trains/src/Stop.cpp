/*
 * Stop.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Stop.h"

using namespace std;

Stop::Stop( int distance, string name) {
	distanceToNext = distance;
	this->name = name;
}

Stop::~Stop() {}


