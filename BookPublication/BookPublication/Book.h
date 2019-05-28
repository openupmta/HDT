#pragma once
#include"Publication.h"
class Book:public Publication
{
private:
	int pages;
public:
	void getData();
	void putData();
	Book();
	~Book();
};

