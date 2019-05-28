#include "Stack.h"



template <class T> void Stack<T>::push(T d) { 
	first = new Element<T>(first, d); 
}

template <class T> T Stack<T>::pop() { 
	Element<T>* p = first; 
	T d = p->data; 
	first = first->next; 
	delete p;
	return d; 
} 
template <class T> Stack<T>::~Stack() { 
	while (!isEmpty()) { 
		Element<T>* p = first; 
		first = first->next; 
		delete p; 
	} 
} 
