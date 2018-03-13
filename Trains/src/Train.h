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

using namespace std;

class Train {
	int currentStop;
	float speed;

public:
	Line line;
	  int getCurrentStop();
	  float getSpeed();
	  float travelTime(float distance);
	  void stop();
	  void go();
	  void makeStop();

	Train();
	virtual ~Train();
};


#endif /* TRAIN_H_ */
