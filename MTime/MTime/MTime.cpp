#include "MTime.h"



MTime MTime::operator+(const MTime& time)
{
	MTime sum;
	int congGiay = time.hours * 3600 + time.minutes * 60 + time.seconds;
	int tongGiay = this->seconds + congGiay;
	sum.seconds = tongGiay % 60;
	int congPhut = tongGiay / 60;
	int tongPhut = this->minutes + congPhut;
	sum.minutes = tongPhut % 60;
	int congGio = tongPhut / 60;
	int tongGio = this->hours + congGio;
	sum.hours = tongGio % 24;
	return sum;
}

void MTime::display()
{
	string hours = to_string(this->hours);
	string minutes = to_string(this->minutes);
	string seconds = to_string(this->seconds);
	if (this->hours < 10 && this->hours >= 0)
	{
		hours = "0" + hours;
	}
	if (this->minutes < 10 && this->minutes >= 0)
	{
		minutes = "0" + minutes;
	}
	if (this->seconds < 10 && this->seconds >= 0)
	{
		seconds = "0" + seconds;
	}
	cout << hours << ":" << minutes << ":" << seconds << endl;
}

MTime::MTime(int hours, int minutes, int seconds)
{
	this->hours = hours;
	this->minutes = minutes;
	this->seconds = seconds;
}

MTime::MTime()
{
	this->hours = 0;
	this->minutes = 0;
	this->seconds = 0;
}


MTime::~MTime()
{
}


