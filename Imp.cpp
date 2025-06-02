#include "Header.h"




Time::Time() {

	hour = second = minute = 0;


};


// h 23  , 00
// m 59  , 00
// s 59  , 0 0
void Time::Time::setTime(int h, int m, int s) {

	if (m > 59 || m < 0 || s > 59 || s < 0) {
		m = s = 0;
	}
	else {
		minute = m;
		second = s;
	}
	if (h > 23 || h < 0) {
		h = 0;
	}
	else {
		hour = h;
	}
}

void Time::printUniversal() {




}

void Time::printStandard() {




}
