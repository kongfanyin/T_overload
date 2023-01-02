#define _CRT_SECURE_NO_WARNINGS 1
#include"mytime.h"
#include<string>
#include<fstream>
#include<iostream>

int main(char argc, char** argv)
{
	using std::cout;
	using std::endl;
	Time weeding(4, 22);
	Time waxing(2, 47);
	Time total;
	Time diff;
	Time adjusted;
	cout << "weeding time";
	weeding.show();
	cout << endl;

	cout << "waxing time ";
	waxing.show();
	cout << endl;

	cout << "total work time ";
	total = weeding + waxing;//using opreator+
	total.show();
	cout << endl;

	diff = weeding - waxing;//using opreator-
	cout << "weeding time-waxing time ";
	diff.show();
	cout << endl;

	adjusted = total * 1.5;
	cout << "adjusted work time = ";
	adjusted.show();
	cout << endl;
	return 0;
}