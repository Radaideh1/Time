#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

class Time {

	int hour;
	int minute;
	int second;


public:
	// give the valu the init value (0)
	Time();
	// set the time and check !!
	void setTime(int h, int m, int s);
	// 24 
	void printUniversal();
	// 12
	void printStandard();



};