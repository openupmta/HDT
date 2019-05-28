#include"Stack.h"
#include<iostream>
using namespace std;
int main() { 
	int n; 
	cout << "Ngai muon xem dang nhi phan cua so:";
	cin >> n; 
	Stack<int> stkint; 
	while (n) { 
		stkint.push(n % 2);
		n /= 2; 
	}  
	cout << "Ket qua:";  
	while (!stkint.isEmpty()) 
		cout << stkint.pop();  /* cần include “mstring.h” Stack<String> stks;  stks.push("ajg ajgd");  stks.push(" a 128");  while(!stks.isEmpty())   cout << stks.pop() << endl;  */  
	return 0; 
}