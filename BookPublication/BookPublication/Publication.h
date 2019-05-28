#pragma once
#include<iostream>
#include<string>
using namespace std;
class Publication
{
protected:
	string title;//tieu de
	float price;//gia
public:
	virtual void getData() = 0;
	virtual void putData() = 0;
	Publication();
	~Publication();
};

