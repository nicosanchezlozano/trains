/*
 * Stop.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef STOP_H_
#define STOP_H_

#include <iostream>

using namespace std;

class Stop {
	string name;
	 int distanceToNext;
public:
	
	Stop(int distance, string name);
	virtual ~Stop();
	int getDistanceToNext() const;
	const string& getName() const;
};



#endif /* STOP_H_ */
