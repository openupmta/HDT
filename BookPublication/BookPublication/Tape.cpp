#include "Tape.h"


void Tape::getData()
{
	cout << "Enter information " << endl;
	cout << "Enter Title: "; getline(cin, this->title);
	cout << "Enter price: "; cin >> this->price;
	cout << "Enter time: "; cin >> this->time;
	cin.ignore();
}

void Tape::putData()
{
	cout << "Title: " << this->title << endl;;
	cout << "Price: " << this->price<< endl;
	cout << "Iime: " << this->time << endl;
}
Tape::Tape()
{
}


Tape::~Tape()
{
}
