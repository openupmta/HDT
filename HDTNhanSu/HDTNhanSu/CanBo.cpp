#include "CanBo.h"



void CanBo::nhap()
{
	cout << "Thong tin can bo" << endl;
	cout << "Ten : "; getline(cin,this->ten);
	cout << "Ma: "; getline(cin, this->ma);
	cout << "Ma Phong Ban: "; getline(cin, this->maPhongBan);
	cout << "Ma Chuc Vu: "; getline(cin, this->maChucVu);
}

void CanBo::xuat()
{
	cout << "Ten : " << this->ten << endl;
	cout << "Ma: " << this->ma << endl;
	cout << "Ma Phong Ban: "<< this->maPhongBan<<endl;
	cout << "Ma Chuc Vu: "<< this->maChucVu<<endl;
}

CanBo::CanBo()
{
	this->ma = "";
	this->maChucVu = "";
	this->maPhongBan = "";
	this->ten = "";
}


CanBo::~CanBo()
{
}

ostream& operator<<(ostream& out, const CanBo& canBo)
{
	out  << "Ten : " << canBo.ten << endl;
	out  << "Ma: " << canBo.ma << endl;
	out  << "Ma Phong Ban: " << canBo.maPhongBan << endl;
	out  << "Ma Chuc Vu: " << canBo.maChucVu << endl;
	return out;
	// TODO: insert return statement here
}

istream& operator>>(istream& in, CanBo& canBo)
{
	cout << "Thong tin can bo" << endl;
	cout << "Ten : "; getline(in, canBo.ten);
	cout << "Ma: "; getline(in, canBo.ma);
	cout << "Ma Phong Ban: "; getline(in, canBo.maPhongBan);
	cout << "Ma Chuc Vu: "; getline(in, canBo.maChucVu);
	return in;
	// TODO: insert return statement here
}
