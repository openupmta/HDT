#include "TamGiac.h"



void TamGiac::tinhChuVi()
{
	this->chuVi = this->a + this->b + this->c;
}

void TamGiac::tinhDienTich()
{
	double p = (a + b + c) / 2;
	this->dienTich =  sqrt(p * (p - a) * (p - b) * (p - c)) ;
}

void TamGiac::dinhDang()
{
	if ((a + b) > c && (a + c) > b && (b + c) > a) {
		if (a == b || a == c || b == c) {
			if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
				cout << "Tam giac ban vua nhap la tam giac vuong can!!!" << endl;
			}
			else if (a == b && a == c) {
				cout << "Tam giac ban vua nhap la tam giac deu!!!" << endl;
			}
			else {
				cout << "Tam giac ban vua nhap la tam giac can!!!" << endl;
			}
		}
		if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
			cout << "Tam giac ban vua nhap la tam giac vuong!!!" << endl;
		}
	}
	else {
		cout << "Ba canh vua nhap khong tao thanh tam giac!!" << endl;
	}

}

TamGiac::TamGiac()
{
}


TamGiac::~TamGiac()
{
}

ostream& operator<<(ostream& out, const TamGiac& t)
{
	out << "3 canh:  "<<t.a <<","<<t.b<<","<<t.c <<endl;
	return out;
	// TODO: insert return statement here
}

istream& operator>>(istream& in, TamGiac& t)
{
	cout << " a: "; in >> t.a;
	cout << " b: "; in >> t.b;
	cout << " c: "; in >> t.c;

	return in;
	// TODO: insert return statement here
}
