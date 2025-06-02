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

	Time();
	void setTime(int ,int ,int);
	void printUniversal();
	void printStandard();



};