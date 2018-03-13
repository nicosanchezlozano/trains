/*
 * Line.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef LINE_H_
#define LINE_H_

#include <vector>
#include "Stop.h"
namespace std {

class Line {
	vector<Stop> stops;
public:
	void addStop(Stop stop);
	Stop getCurrentStop(int s);
	Line();
	virtual ~Line();
};

#endif /* LINE_H_ */
