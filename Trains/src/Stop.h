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


using namespace std;


class Stop {

	string name;
	 int distanceToNext;
	// Semaphore s;
public:
	mutex stopLock;
	Stop(int distance, string name/*, int platforms*/);
	virtual ~Stop();
	int getDistanceToNext() const;
	const string& getName() const;
	void setDistanceToNext(int distanceToNext);
};



#endif /* STOP_H_ */
