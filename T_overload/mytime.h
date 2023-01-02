#pragma once
#ifndef MTIME_
#define MTIME_
class Time
{
public:
	Time();
	Time(int h, int m = 0);
	~Time();
	void Addh(int h);
	void Addm(int m);
	void Reset(int h = 0, int m = 0);
	Time operator+(const Time &t)const;
	Time operator-(const Time &t)const;
	Time operator*(double mult)const;
private:
	int hours;
	int minute;
};


#endif // !MTIME_

