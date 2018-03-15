/*
 * Train.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef TRAIN_H_
#define TRAIN_H_

#include "Line.h"
#include <chrono>
#include <thread>
#include <mutex>

using namespace std;

class Train {
	int currentStop;
	float speed;
	string name;


public:
	Line* line = new Line;
	  int getCurrentStop();
	  float getSpeed();
	  int getId();
	  int travelTime(int distance);
	  void stop();
	  void go();
	  void makeStop();
	  void moveTrain();

	Train(string name);
	virtual ~Train();
};


#endif /* TRAIN_H_ */
