#include "Header.h"




Time::Time() {

	hour = second = minute = 0;


};



void Time::setTime(int h, int m, int s) {

	(m > 59 || m < 0 || s > 59 || s < 0 ? m = s = 0 : minute = m, second = s);
	(h > 23 || h < 0 ? h = 0 : hour = h);

}

void Time::printUniversal() {

	cout << std::setfill('0') << std::setw(2) << hour << ':'<< std::setw(2) 
		<< minute <<':'<< std::setw(2) << second << endl;


}

void Time::printStandard() {

	cout << std::setfill('0') << std::setw(2) << (hour == 0 || hour == 12 ? 12 : hour % 12)<<
		':' << std::setw(2)<< minute << ':' << std::setw(2) << second <<(hour < 12?" Am":" PM") << endl;


}
