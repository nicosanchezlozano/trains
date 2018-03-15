/*
 * Stop.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef STOP_H_
#define STOP_H_

#include <iostream>
#include <mutex>
#include "semaphore.cpp"


using namespace std;


class Stop {
	string name;
	int distanceToNext;
public:
	Semaphore s;
	Stop(int distance, string name, int platforms = 1);
	virtual ~Stop();
	int getDistanceToNext() const;
	const string& getName() const;
	void setDistanceToNext(int distanceToNext);
};



#endif /* STOP_H_ */
