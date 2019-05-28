#include"MTime.h"
#include<iostream>
using namespace std;
void main()
{
	MTime t1(23,59,59), t2(0,0,2), t;

	t1.display();
	t2.display();
	t = t1 + t2;
	t.display();
	system("pause");
}