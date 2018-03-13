/*
 * Train.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Train.h"

using namespace std;

int Train::getCurrentStop(){
	return currentStop;
}

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
void Train::makeStop(){
	cout<< "he llegado a la parada "<< line.getStop(currentStop).getName()<< endl;
	stop();
	this_thread::sleep_for (chrono::seconds(3));
	if (currentStop != line.getSizeOfStops()){
		go();
		currentStop++; //Tiene en cuenta siguiente parada
	}
}


Train::Train() {
	currentStop = 0;
	stop();
}

Train::~Train() {}

