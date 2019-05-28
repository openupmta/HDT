#include "MonChuyenNganh.h"
using namespace std;

void MonChuyenNganh::nhap()
{
	cout << "Thong tin mon chuyen nganh" << endl;
	cout << "Ten Mon : "; getline(cin, this->tenMon);
	cout << "Ma Mon : "; getline(cin, this->maMon);
	cout << "Ma Chuyen Nganh: "; getline(cin, this->maChuyenNganh);
	cout << "So Dvht: "; cin>>this->soDvht;
	cin.ignore();

}

void MonChuyenNganh::xuat()
{
	cout << "Ten Mon : " << this->tenMon << endl;
	cout << "Ma Mon : " << this->maMon<<endl;
	cout << "Ma Chuyen Nganh: " << this->maChuyenNganh<<endl;
	cout << "So Dvht: " <<this->soDvht<<endl;
}

MonChuyenNganh::MonChuyenNganh()
{
}


MonChuyenNganh::~MonChuyenNganh()
{
}

ostream& operator<<(ostream& out, const MonChuyenNganh& chuyenNganh)
{
	out << "Ten Mon : " << chuyenNganh.tenMon << endl;
	out << "Ma Mon : " << chuyenNganh.maMon << endl;
	out << "Ma Chuyen Nganh: " << chuyenNganh.maChuyenNganh << endl;
	out << "So Dvht: " << chuyenNganh.soDvht << endl;
	return out;
	// TODO: insert return statement here
}

istream& operator>>(istream& in, MonChuyenNganh& chuyenNganh)
{
	cout << "Thong tin mon chuyen nganh" << endl;
	cout << "Ten Mon : "; getline(in, chuyenNganh.tenMon);
	cout << "Ma Mon : "; getline(in, chuyenNganh.maMon);
	cout << "Ma Chuyen Nganh: "; getline(in, chuyenNganh.maChuyenNganh);
	cout << "So Dvht: "; in >> chuyenNganh.soDvht;
	cin.ignore();
	return in;
	// TODO: insert return statement here
}
