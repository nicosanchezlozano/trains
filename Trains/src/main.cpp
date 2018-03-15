/*
 * main.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include <chrono>
#include <thread>
#include <mutex>
#include <vector>
#include "Train.h"




void startLine(Train* train){
	train->moveTrain();
}

int main(){

	Train* train1 = new Train("Train1");
	Train* train2 = new Train("                   Train2");
	Train* train3 = new Train("                                          Train3");
	Stop* stop1 = new Stop(300, "A");
	Stop* stop2 = new Stop(210, "D", 2);
	Stop* stop3 = new Stop(150, "M");
	Stop* stop4 = new Stop(300, "P");
	Stop* stop5 = new Stop(180, "S");
	Stop* stop6 = new Stop(240, "T");
	Stop* stop7 = new Stop(270, "N");
	Stop* stop8 = new Stop(180, "C");

	train1->line->addStop(stop1);
	train1->line->addStop(stop2);
	train1->line->addStop(stop8);
	train1->line->addStop(stop3);

	train2->line->addStop(stop4);
	train2->line->addStop(stop2);
	train2->line->addStop(stop5);
	train2->line->addStop(stop3);
	train2->line->addStop(stop6);

	train3->line->addStop(stop7);
	train3->line->addStop(stop2);
	train3->line->addStop(stop8);

	thread t1(startLine, train1);
	thread t2(startLine, train2);
	thread t3(startLine, train3);
	t1.join();
	t2.join();
	t3.join();

}

