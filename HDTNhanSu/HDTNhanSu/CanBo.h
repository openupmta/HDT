#pragma once
#include"NhanSu.h"
#include<string>
#include<iostream>
using namespace std;
class CanBo:public NhanSu
{
	friend ostream& operator<<(ostream& out, const CanBo& canBo);
	friend istream& operator>>(istream& in, CanBo& canBo);
private:
	string maPhongBan;
	string maChucVu;

public:
	void nhap();
	void xuat();
	CanBo();
	~CanBo();
};

