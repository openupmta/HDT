#pragma once
#include<iostream>
using namespace std;
class PTBac2
{
	friend ostream& operator<<(ostream& out, const PTBac2& p);
	friend istream& operator>>(istream& in, PTBac2& p);
private:
	int a, b, c;

public:
	
	PTBac2();
	~PTBac2();
};

