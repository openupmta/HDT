#pragma once
#include<string>
#include<iostream>
using namespace std;
class MTime
{
	
private:
	int hours;
	int minutes;
	int seconds;
public:
	MTime operator+(const MTime& time);
	void display();
	MTime(int hours, int minutes, int seconds);
	MTime();
	~MTime();
};

