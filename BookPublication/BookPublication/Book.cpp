#include "Book.h"



void Book::getData()
{
	cout << "Enter information " << endl;
	cout << "Enter Title: "; getline(cin, this->title);
	cout << "Enter price: "; cin >> this->price;
	cout << "Enter pages: "; cin >> this->pages;
	cin.ignore();
}

void Book::putData()
{
	cout << "Title: " << this->title << endl;
	cout << "Price: "<< this->price << endl;
	cout << "Pages: "<< this->pages << endl;
}

Book::Book()
{
}


Book::~Book()
{
}
