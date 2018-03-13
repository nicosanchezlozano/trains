/*
 * main.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Train.h"
#include <chrono>
#include<thread>

int main(){

	Train train1;
	Stop stop1(500, "Atocha");
	Stop stop2(400, "Delicias");
	Stop stop3(350, "Méndez álvaro");
	Stop stop4(0, "Pirámides");

	train1.line.addStop(stop1);
	train1.line.addStop(stop2);
	train1.line.addStop(stop3);

	while(train1.getCurrentStop() != (train1.line.getSizeOfStops())){

		train1.makeStop();
		if(train1.getCurrentStop() != train1.line.getSizeOfStops())
			this_thread::sleep_for (chrono::seconds(train1.travelTime(train1.line.getStop(train1.getCurrentStop()).getDistanceToNext())));;
	}
}

