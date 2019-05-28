#pragma once
#include<iostream>
using namespace std;
class Date
{
	friend ostream& operator<<(ostream& out, const Date& date);
	friend istream& operator>>(istream& in, Date& date);
private:
	int ngay;
	int thang;
	int nam;
public:
	friend int standardDistance(Date date);
	static int soNgayGiuaDate(Date date1, Date date2);
	static int soNgayCuaThang(Date date);
	static bool kiemTraNamNhuan(Date date);
	Date();
	~Date();
};

