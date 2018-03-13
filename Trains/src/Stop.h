/*
 * Stop.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef STOP_H_
#define STOP_H_

using namespace std;

class Stop {
	string name;
	  int distanceToNext;
public:
	  string getName();
	  int getDistance();
	Stop();
	virtual ~Stop();
};



#endif /* STOP_H_ */
