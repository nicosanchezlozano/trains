/*
 * Stop.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Stop.h"
#include <iostream>

using namespace std;



Stop::Stop( int distance, std::string name/*, int platforms*/) {
	distanceToNext = distance;
	this->name = name;
//	for(int i = 0; i < platforms; i++){
//		s.notify();
//	}
}

Stop::~Stop() {
}

int Stop::getDistanceToNext() const {
	return distanceToNext;
}

const string& Stop::getName() const {
	return name;
}

void Stop::setDistanceToNext(int distanceToNext) {
	this->distanceToNext = distanceToNext;
}
