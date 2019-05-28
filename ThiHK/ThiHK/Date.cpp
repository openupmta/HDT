#include "Date.h"

//Thuat toan tinh khoang cach ngay hien tai voi ngay 1/1/1

int standardDistance(Date date)
{
	if (date.thang < 3) {
		date.nam--;
		date.thang += 12;
	}
	return 365 * date.nam + date.nam / 4 - date.nam / 100 + date.nam / 400 + (153 * date.thang - 457) / 5 + date.ngay - 306;
}
int Date::soNgayGiuaDate(Date date1, Date date2)
{
	int distance = standardDistance(date1) - standardDistance(date2);
	if (distance < 0)
	{
		distance *= -1;
	}
	return distance;
}

int Date::soNgayCuaThang(Date date)
{
	if (date.thang == 4 || date.thang == 6 || date.thang == 9 || date.thang == 11)
	{
		return 30;
	}
	else if (date.thang == 1 || date.thang == 3 || date.thang == 5 || date.thang == 7 || date.thang == 9)
	{
		return 31;
	}
	else
	{
		if (date.nam % 100 == 0 && date.nam % 400 == 0 || date.nam % 4 == 0)
		{
			return 29;
		}
		else {
			return 28;
		}
	}
}

bool Date::kiemTraNamNhuan(Date date)
{
	if (date.nam % 100 == 0 && date.nam % 400 == 0 || date.nam % 4 == 0)
	{
		return true;
	}
	else {
		return false;
	}
}

Date::Date()
{

}


Date::~Date()
{
}

ostream& operator<<(ostream& out, const Date& date)
{
	out << "Ngay: " << date.ngay << "/" << date.thang << "/" << date.nam << endl;
	return out;
	// TODO: insert return statement here
}

istream& operator>>(istream& in, Date& date)
{
	cout << "Ngay : "; in >> date.ngay;
	cout << "Thang : "; in >> date.thang;
	cout << "Nam : "; in >> date.nam;
	return in;
	// TODO: insert return statement here
}



