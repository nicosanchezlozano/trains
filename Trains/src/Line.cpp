/*
 * Line.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Line.h"

using namespace std;

void Line::addStop(Stop stop){
    stops.push_back(stop);
  }
Stop Line::getStop(int s){
	return stops[s];
}





