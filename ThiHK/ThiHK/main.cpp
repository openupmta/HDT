#include"HinhChuNhat.h"
#include"HinhTron.h"
#include"PTBac2.h"
#include"TamGiac.h"
#include"Date.h"
#include"Time.h"
#include"phanso.h"
#include<iostream>

using namespace std;

int main()
{
	//cout << thisIsMagic(2019, 5, 3) - thisIsMagic(2019, 5,4)<< endl;
	//Time b1 ,b2;
	//int cong = 0;
	//b1.nhap();
	//b2.nhap();
	//cout << b1.sosanh(b2);
	//--b1;
	//b1.xuat();
	/*if (b1.sosanh(b2) == 0)
	{
		cout << "Bang nhau" << endl;
	}

	else if (b1.sosanh(b2) == 1)
	{
		cout << "Lon Hon" << endl;
	}
	else
	{
		cout << "Nho hon" << endl;
	}*/
	phanso ps1, ps2, tong,hieu;
	cin >> ps1;
	cin >> ps2;
	tong = ps1 + ps2;
	hieu = ps1 - ps2;
	cout << toiGian(tong);
	cout<<toiGian(hieu);
	/*cin >> ps1;
	tong = toiGian(ps1.congNguyen(6));
	
	cout << tong;*/
	

	/*Date date2,date1;
	while (true)
	{
		cin >> date1;
		cout << date1;
		cin >> date2;
		cout << date2;
		cout << "Distance : " << Date::soNgayGiuaDate(date1, date2);
	}*/
	/*if (Date::kiemTraNamNhuan(date)) cout << "La nam nhuan" << endl;
	cout << Date::soNgayCuaThang(date) << endl;*/

	/*TamGiac t;
	cin >> t;
	cout << t;
	t.tinhChuVi();
	t.tinhDienTich();
	cout <<"Chu Vi : " <<t.chuVi << endl;
	cout << "Dien Tich: " << t.dienTich << endl;
	t.dinhDang();*/
	/*PTBac2 p;
	cin >> p; cout << p;*/
	/*HinhChuNhat hcn;
	hcn.nhap();
	hcn.tinhChuVi(); hcn.tinhDienTich();
	HinhTron ht;
	ht.nhap();
	ht.tinhChuVi(); ht.tinhDienTich() ;*/
	system("pause");
	return 0;
}