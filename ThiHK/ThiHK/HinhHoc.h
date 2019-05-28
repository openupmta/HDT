#pragma once
//Trong lop co so truu tuong 
/*
La lop chi duoc dung lam co so cho lop khac
Khong khoi tao doi tuong 
lop dan xuat phai dinh nghia lai cac phuong thuc ao 
*/
class HinhHoc
{
	
public:
	//Phuong thuc ao ->lop truu tuong 
	virtual void nhap() = 0;
	virtual void tinhChuVi() = 0;
	virtual void tinhDienTich() = 0;
	
	//HinhHoc();
	//~HinhHoc();
};

