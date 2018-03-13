/*
 * Train.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Train.h"

using namespace std;

float Train::getSpeed(){
  return speed;
}

float Train::travelTime(float distance){
  return distance / speed;
}

void Train::stop(){
  speed = 0;
}

void Train::go(){
  speed = 15;  //  m/s
}

Train::Train() {
	currentStop = 0;
	stop();
}

Train::~Train() {}

