#include "PTBac2.h"



PTBac2::PTBac2()
{
}


PTBac2::~PTBac2()
{
}

ostream& operator<<(ostream& out, const PTBac2& p)
{
	float delta;
	delta = p.b * p.b - 4 * p.a * p.c;
	if (delta > 0) {
		out << "Phuong trinh co 2 nghiem phan biet: " << (-p.b + sqrt(delta)) / (2 * p.a) << " , " << (-p.b - sqrt(delta)) / (2 * p.a) << endl;
	}
	else if (delta == 0) {
		out << "Phuong trinh co nghiem kep: " << -p.b / (2 * p.a) << endl;
	}
	else {
		out << "Phuong trinh vo nghiem!!" << endl;
	}
	return out;

	// TODO: insert return statement here
}

istream& operator>>(istream& in, PTBac2& p)
{
	cout << " a: "; in >> p.a;
	cout << " b: "; in >> p.b;
	cout << " c: "; in >> p.c;

	return in;
	// TODO: insert return statement here
}
