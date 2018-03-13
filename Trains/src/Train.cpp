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
	if(id == 1){
		cout<< line.getStop(currentStop).getName()<< endl;
		stop();
		this_thread::sleep_for (chrono::seconds(3));
		currentStop++; //Tiene en cuenta siguiente parada
		if (currentStop != line.getSizeOfStops()){
			go();
			cout << "Saliendo de la parada: "<<line.getStop(currentStop-1).getName() << endl;
		}
	}else if(id == 2){
		cout<< "   " <<line.getStop(currentStop).getName()<< endl;
		stop();
		this_thread::sleep_for (chrono::seconds(3));
		currentStop++; //Tiene en cuenta siguiente parada
		if (currentStop != line.getSizeOfStops()){
			go();
			cout << "Saliendo de la parada: "<<line.getStop(currentStop-1).getName() << endl;
		}

	}
}

void Train::moveTrain(){
	while(currentStop != line.getSizeOfStops()){
		makeStop();
		if(currentStop != line.getSizeOfStops()){
			int timeOfTravel = travelTime(line.getStop(currentStop).getDistanceToNext());
			if(id == 1){
				for(int i = 0; i < timeOfTravel; i = i + 3){
					this_thread::sleep_for (chrono::seconds(3));
					cout<<"·"<<endl;
				}
			} else if (id == 2){
				for(int i = 0; i < timeOfTravel; i = i + 3){
					this_thread::sleep_for (chrono::seconds(3));
					cout<<"   "<<"·"<<endl;
				}
			}
		}
	}
}


Train::Train(int id):id(id) {
	currentStop = 0;
	stop();
}

Train::~Train() {}

