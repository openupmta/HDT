#include "phanso.h"



//phanso phanso::operator+(const phanso& ps)
//{
//	phanso tong;
//	tong.tu = this->tu * ps.mau + ps.tu * this->mau;
//	tong.mau = this->mau * ps.mau;
//	return tong;
//}
//
//phanso phanso::operator-(const phanso& ps)
//{
//	phanso hieu;
//	hieu.tu = this->tu * ps.mau - ps.tu * this->mau;
//	hieu.mau = this->mau * ps.mau;
//	return hieu;
//}

phanso phanso::congNguyen(int n)
{
	phanso tong;
	tong.tu = this->tu + this->mau * n;
	tong.mau = this->mau;
	return tong;
}

phanso::phanso()
{
}


phanso::~phanso()
{
}

ostream& operator<<(ostream& out, const phanso& phanso)
{
	if (phanso.mau == 1)
	{
		out << "Phan So: " << phanso.tu << endl;
	}
	else if (phanso.tu == 0)
	{
		out << "Phan So: 0"<< endl;
	}
	else
	{
		out << "Phan So: " << phanso.tu << " / " << phanso.mau << endl;
	}
	return out;
	// TODO: insert return statement here
}

istream& operator>>(istream& in, phanso& phanso)
{
	cout << "Tu so: ";
	in >> phanso.tu;
	cout << "Mau so: ";
	in >> phanso.mau;
	return in;
	// TODO: insert return statement here
}
int UCLN(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
phanso toiGian(phanso ps)
{
	phanso toiGian;
	int ucln = UCLN(ps.tu, ps.mau);

	toiGian.tu =ps.tu/ ucln;
	toiGian.mau =ps.mau/ ucln;

	return toiGian;
}
//ham ban
phanso& operator+(const phanso& ps1,const phanso& ps2)
{
	phanso tong;
	tong.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
	tong.mau = ps1.mau * ps2.mau;
	return tong;
}
//ham ban
phanso& operator-(const phanso& ps1,const phanso& ps2)
{

	phanso hieu;
	hieu.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
	hieu.mau = ps1.mau * ps2.mau;
	return hieu;
}




