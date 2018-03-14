/*
 * main.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Train.h"
#include <chrono>
#include <thread>

void startLine(Train train){
	train.moveTrain();
}

int main(){

	Train train1(1);
	Train train2(2);
	Stop stop1(500, "A");
	Stop stop2(400, "D");
	Stop stop3(350, "M");
	Stop stop4(500, "P");

	train1.line.addStop(stop3);
	train1.line.addStop(stop2);
	train1.line.addStop(stop1);

	train2.line.addStop(stop1);
	train2.line.addStop(stop2);
	train2.line.addStop(stop3);
	train2.line.addStop(stop4);


	thread t1(startLine, train1);
	thread t2(startLine, train2);
	t1.join();
	t2.join();

}

