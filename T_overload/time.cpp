#define _CRT_SECURE_NO_WARNINGS 1
#include"mytime.h"
#include <iostream>

Time::Time(int h, int m = 0)
{
	hours = h;
	minute = m;
}
void Time::Addh(int h)
{
	hours += h;
}
void Time::Addm(int m)
{
	minute += m;
	hours += minute / 60;
	minute %= 60;
}
void Time::Reset(int h, int m)
{
	hours = h;
	minute = m;
}
Time Time::operator+(const Time &t)const
{
	Time sum;
	sum.minute = minute + t.minute;
	sum.hours = hours + t.hours + minute / 60;
	sum.minute %= 60;
	return sum;
}
Time Time::operator-(const Time &t)const
{
	Time diff;
	int tot1, tot2;
	tot1 = t.minute + 60 * t.hours;
	tot2 = minute + 60 * hours;
	diff.minute = (tot2 - tot1) % 60;
	diff.hours = (tot2 - tot1) / 60;
	return diff;
}
Time Time::operator*(double mult)const
{
	Time result;
	long totalminutes = hours * mult * 60 + minute * mult;
	result.hours = totalminutes / 60;
	result.minute = totalminutes % 60;
	return result;
}
Time::Time()
{
	hours = minute = 0;
}
void Time::show()const
{
	std::cout << hours << " hours," << minute << "minutes.\n";
}

Time::~Time()
{

}
