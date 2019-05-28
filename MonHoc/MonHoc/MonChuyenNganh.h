#pragma once
#include"MonHoc.h"
#include<string>
#include<iostream>
using namespace std;
class MonChuyenNganh:public MonHoc
{
	friend ostream& operator<<(ostream& out, const MonChuyenNganh& chuyenNganh);
	friend istream& operator>>(istream& in, MonChuyenNganh& chuyenNganh);
private:
	string maChuyenNganh;
	int soDvht;
public:
	void nhap();
	void xuat();
	MonChuyenNganh();
	~MonChuyenNganh();
};

