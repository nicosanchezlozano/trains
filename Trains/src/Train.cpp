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
		cout << name + ": esperando..\n";
		line->getStop(currentStop)->s.wait();
		cout<< name +": " + line->getStop(currentStop)->getName() << endl;
		stop();
		this_thread::sleep_for (chrono::seconds(4));
		line->getStop(currentStop)->s.notify();
		currentStop++;
		if (currentStop != line->getSizeOfStops()){
			go();
			cout << name + " sale de: "+ line->getStop(currentStop-1)->getName() << endl;
	}
}

void Train::moveTrain(){
	while(currentStop != line->getSizeOfStops()){
		makeStop();
		if(currentStop != line->getSizeOfStops()){
			int timeOfTravel = travelTime(line->getStop(currentStop-1)->getDistanceToNext());
			for(int i = 0; i < timeOfTravel; i = i + 3){
				cout<< name << "->" <<endl;
				this_thread::sleep_for (chrono::seconds(3));

			}
		}
	}
}


Train::Train(string name):name(name) {
	currentStop = 0;
	stop();
}

Train::~Train() {}

