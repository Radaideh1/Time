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

	cout << std::setfill('0') << std::setw(2) << hour << ':'<< std::setw(2) 
		<< minute <<':'<< std::setw(2) << second << endl;


}

void Time::printStandard() {

	cout << std::setfill('0') << std::setw(2) << (hour == 0 || hour == 12 ? 12 : hour % 12)<<
		':' << std::setw(2)<< minute << ':' << std::setw(2) << second << endl;


}
