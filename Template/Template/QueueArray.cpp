//#include<iostream>
//#include<cstdlib>
//#define default_value 16
//using namespace std;
//
//template< class T > class Queue
//{
//private:
//	int size;
//	T* values;
//	int front;
//	int rear;
//public:
//	Queue(int = default_value);//default constructor
//	~Queue()//destructor
//	{
//		delete[] values;
//	}
//	bool enQueue(T);
//	T deQueue();
//	bool isEmpty();
//	bool isFull();
//
//};
//
//template< class T > Queue<T>::Queue(int x)
//{
//	this->size = x;//ctor
//	values = new T[size];
//	this->front = 0;
//	this->rear = 0;
//}
//
//
//template< class T > bool Queue<T>::isFull()
//{
//	if (front == size)
//		return 1;
//	else
//		return 0;
//}
//
//template< class T > bool Queue<T>::enQueue(T x)
//{
//	bool b = 0;
//	if (!Queue<T>::isFull())
//	{
//		
//		rear = rear + 1;
//		values[rear] = x;
//		b = 1;
//	}
//	return b;
//}
//
//template< class T > bool Queue<T>::isEmpty()
//{
//	if (front < 0 || front > rear)//is empty
//		return 1;
//	else
//		return 0; //is not empty
//}
//
//template< class T > T Queue<T>::deQueue()
//{
//	T val = -1;
//	if (!Queue<T>::isEmpty())
//	{
//		
//		front = (front + 1);
//		val = values[front];
//	}
//	else
//	{
//		cerr << "Queue is Empty : ";
//	}
//	return val;
//
//}
//
//int main()
//{
//	Queue <float> qu1(32);
//	float x = 1.1;
//	int i = 1; 
//	cout << "\n Khoi tao ";
//
//	for (; i < 10; i++) 
//	{
//		if (qu1.enQueue(i * x))
//			cout << endl << i * x;
//		else
//			cout << "\n Queue is full: ";
//	}
//	cout << "\n\n DeQueue : \n";
//	for (int j = 1; j < 10; j++)
//		cout << qu1.deQueue() << endl;
//
//	cout << endl << endl;
//	return 0;
//}