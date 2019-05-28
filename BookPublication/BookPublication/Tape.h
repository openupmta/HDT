#pragma once
#include"Publication.h"
//Bawng ghi 
class Tape:public Publication
{
private:
	float time;
public:
	void getData();
	void putData();
	Tape();
	~Tape();
};

