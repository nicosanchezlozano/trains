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

int Train::travelTime(int distance){
  return distance / speed;
}

void Train::stop(){
  speed = 0;
}

void Train::go(){
  speed = 30;  //  m/s
}
void Train::makeStop(){
	cout<< "he llegado a la parada "<< line.getStop(currentStop).getName()<< endl;
	stop();
	this_thread::sleep_for (chrono::seconds(3));
	currentStop++; //Tiene en cuenta siguiente parada
	if (currentStop != line.getSizeOfStops()){
		go();
		cout << "Saliendo de la parada: "<<line.getStop(currentStop-1).getName() << endl;

	}
}


Train::Train() {
	currentStop = 0;
	stop();
}

Train::~Train() {}

