#pragma once
#include"HinhHoc.h"
#include<iostream>
using namespace std;
const double PI = 3.141592;
class HinhTron :public HinhHoc
{
private:
	int r;
public:
	//Phuong thuc ao ->lop truu tuong 
	void nhap() {
		cout << "Moi ban nhap ban kinh: ";
		cin >> r;
	}
	void tinhChuVi()
	{
		cout << "Chu vi HT: " << (2 * PI * r) << endl;
	}
	void tinhDienTich()
	{
		cout<<"Dien Tich HT: "<< (PI*r*r)<<endl;
	}
	//HinhTron();
	//~HinhTron();
};

