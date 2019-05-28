#pragma once
#include<iostream>
using namespace std;
class TamGiac
{
	friend ostream& operator<<(ostream& out, const TamGiac& t);
	friend istream& operator>>(istream& in, TamGiac& t);
private:
	int a, b, c;
public:
	int chuVi;
	double dienTich;
public:
	void tinhChuVi();
	void tinhDienTich();
	void dinhDang();
	TamGiac();
	~TamGiac();
};

