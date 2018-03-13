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
  Stop Line::getCurrentStop(int s){
    return stop[s];
  }

Line::Line() {
	// TODO Auto-generated constructor stub

}

Line::~Line() {
	// TODO Auto-generated destructor stub
}

