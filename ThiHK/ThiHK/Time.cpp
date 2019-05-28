#include "Time.h"
#include<iostream>

using namespace std;


void Time::nhap()
{
	cout << "Nhap Gio: "; cin >> this->gio;
	cout << "Nhap Phut: "; cin >> this->phut;
	cout << "Nhap Giay: "; cin >> this->giay;
}

void Time::xuat()
{
	cout << this->gio << " : " << this->phut << " : " << this->giay << endl;
}

void Time::cong(int congGiay)
{
	int tongGiay = this->giay + congGiay;
	giay = tongGiay % 60;
	int congPhut = tongGiay / 60;
	int tongPhut = this->phut + congPhut;
	phut = tongPhut % 60;
	int congGio = tongPhut / 60;
	int tongGio = this->gio + congGio;
	gio = tongGio % 24;
}

void Time::tru(int truGiay)
{
	int hieuGiay = truGiay % 60;
	this->giay = this->giay - hieuGiay;
	
	if (this->giay < 0)
	{
		this->giay = 60 + giay;
		truGiay = truGiay +  60 - hieuGiay;

	}
	int hieuPhut = (truGiay % 3600)/60;
	this->phut = this->phut - hieuPhut;
		
	if (phut < 0)
	{
		phut = 60 + phut;
		truGiay = truGiay + 3600 - hieuPhut*60;
	}
	int hieuGio = truGiay / 3600;
	
	this->gio = this->gio - hieuGio;
 	
	if (gio < 0)
	{
		gio = 24 + gio;
	}
}

Time Time::operator++()
{
	int tongGiay = this->giay + 1;
	giay = tongGiay % 60;
	int congPhut = tongGiay / 60;
	int tongPhut = this->phut + congPhut;
	phut = tongPhut % 60;
	int congGio = tongPhut / 60;
	int tongGio = this->gio + congGio;
	gio = tongGio % 24;
	return Time();
}

Time Time::operator--()
{
	this->gio = 23 - this->gio;
	this->phut = 59 - this->phut;
	this->giay = 59 - this->giay;
	this->cong(1);
	this->gio = 23 - this->gio;
	this->phut = 59 - this->phut;
	this->giay = 59 - this->giay;
	return Time();
}

int Time::sosanh(Time t1)
{
	if (t1.gio > this->gio)
	{
		return -1;
	}
	else
	{
		if (t1.phut > this->phut)
		{
			return -1;
		}
		else
		{
			if (t1.giay > this->giay)
			{
				return -1;
			}
			else
			{
				if (t1.giay == this->giay)
				{
					return 0;
				}
				if (t1.giay < this->giay)
				{
					return 1;
				}
			}
		}
	}
	
}

Time::Time()
{
}


Time::~Time()
{
}


