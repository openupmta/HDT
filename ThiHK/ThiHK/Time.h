#pragma once

class Time
{
	
private:
	int gio;
	int phut;
	int giay;
public:
	void nhap();
	void xuat();

	void cong(int congGiay);
	void tru(int truGiay);
	Time operator++();
	Time operator--();
	int sosanh(Time t1);
	Time();
	~Time();
};

