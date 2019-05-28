//#include <iostream>
//using namespace std;
//
//template<class T>
//class Stack {
//private:
//	int Size;
//	int Top;
//	T* Data;
//public:
//	Stack(int = 10);
//	~Stack();
//	bool Push(const T&);
//	bool Pop(T&);
//	bool isEmpty() const;
//	bool isFull() const;
//};
//
//template<class T>
//Stack<T> ::Stack(int n) {
//	if (n > 0 && n < 1000)
//		Size = n;
//	else
//		Size = 10;
//	Top = -1;
//	Data = new T[Size];
//}
//
//template<class T>
//Stack<T> ::~Stack() {
//	delete[] Data;
//}
//
//template<class T>
//bool Stack<T> ::Push(const T& Item) {
//	if (!isFull()) {
//		Top++;
//		Data[Top] = Item;
//		/*Đã thêm được vào Stack*/
//		return true;
//	}
//	return false;
//}
//
//template<class T>
//bool Stack<T> ::Pop(T& Item) {
//	if (!isEmpty()) {
//		Item = Data[Top];
//		Top--;
//		return true;
//	}
//	return false;
//}
//
//template<class T>
//bool Stack<T>::isEmpty() const {
//	if (Top == -1)
//		return true;
//	return false;
//}
//
//template<class T>
//bool Stack<T>::isFull() const {
//	if (Top == Size)
//		return true;
//	return false;
//}
//
//int main() {
//	/*Khai báo Stack có 100 phần tử*/
//	Stack<int> a(100);
//	/*Push 7 phần tử vào Stack*/
//	a.Push(1);
//	a.Push(2);
//	a.Push(3);
//	a.Push(4);
//	a.Push(5);
//	a.Push(6);
//	a.Push(7);
//	int data;
//	/*In tất cả các phần tử trong Stack ra màn hình*/
//	while (a.Pop(data)) {
//		cout << data << endl;
//	}
//}