#pragma once
#include <iostream>
using namespace std;
class phanso
{
	friend ostream& operator<<(ostream& out, const phanso& phanso);
	friend istream& operator>>(istream& in, phanso& phanso);
	friend phanso toiGian(phanso ps);
	friend phanso& operator+(const phanso& ps1,const phanso& ps2);

	friend phanso& operator-(const phanso& ps1, const phanso& ps2);
private:
	int tu;
	int mau;
public:
	//phanso operator+(const phanso& ps);
	//phanso operator-(const phanso& ps);
	phanso congNguyen(int n);
	phanso();
	~phanso();
};

