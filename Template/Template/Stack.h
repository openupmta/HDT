#pragma once
//#include"Element.h"
class Element {
	friend class Stack<U>;
	Element* next;
	U data;
	Element(Element* n, U d) :next(n), data(d) {}
};
template <class T>
class Stack { 
public:   
	Stack() :first(0) {};   
	~Stack();   
	void push(T d);   
	T pop();   
	bool isEmpty();   
	bool isFull();  
private:  
	Element<T> *first;  
	Stack(const Stack&) {}; 
	Stack& operator=(const Stack&) {}; 
};
template <class U>
