/*
 * Train.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef TRAIN_H_
#define TRAIN_H_

#include "Line.h"

using namespace std;

class Train {
	int currentStop;
	float speed;
	Line line;
public:
	  float getSpeed();
	  float travelTime(float distance);
	  void stop();
	  void go();
	Train();
	virtual ~Train();
};


#endif /* TRAIN_H_ */
