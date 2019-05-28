#pragma once
#include"HinhHoc.h"
#include<iostream>
using namespace std;
class HinhChuNhat:public HinhHoc
{
private:
	int chieuDai;
	int chieuRong;
public:
	//Phuong thuc ao ->lop truu tuong 
	void nhap() {
		cout << "Moi ban nhap chieu dai: ";
		cin >> chieuDai;
		cout << "Moi ban nhap chieu rong: ";
		cin >> chieuRong;
	}
	void tinhChuVi()
	{
		cout << "Chu Vi HCN: " << (2 * (this->chieuDai + this->chieuRong)) << endl;;
	}
	void tinhDienTich()
	{
		cout << "Dien tich HCN : " << (this->chieuDai * this->chieuRong) << endl;
	}
	//HinhChuNhat();
	//~HinhChuNhat();
};

