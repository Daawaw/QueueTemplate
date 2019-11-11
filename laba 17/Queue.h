#ifndef QUEUE
#define QUEUE

#include <iostream>
#include <stdexcept>

using namespace std;

template <class T>
class Queue {
private:
	T *mass;
	int Size;							
	int Capacity;						 	                 

public:
	Queue();
	Queue(int S);
	Queue(const Queue &other);
	void enqueue(T a); 	
	T dequeue();				
	Queue<T>& operator= (const Queue&);
	template <class T> friend  ostream& operator << (ostream &, const Queue<T> &);
	template <class T> friend  istream& operator >> (istream &, Queue<T> &);

	void clear();
	int size();
	int capacity();

	~Queue();
};

template <class T>
Queue<T>::Queue() {
	Size = 0;
	Capacity = 1;
	mass = new T[Capacity];
}
template <class T>
Queue<T>::Queue(int Capacity) {
	Size = 0;
	mass = new T[Capacity];
	
}

template<class T>
Queue<T>::Queue(const Queue<T> &other) {


	this->Size = other.Size;
	this->Capacity = other.Capacity;
	mass = new T[Capacity];

	for (int i = 0; i < Capacity; i++) {
		mass[i] = other.mass[i];
	}
}




template <class T>
void Queue<T>::enqueue(T a) {

	if (Size >= Capacity) {
		Capacity += 5;
		T *temp = new T[Capacity];
		for (int i = 0; i < Size; i++)
			temp[i] = mass[i];
		delete[] mass;
		mass = temp;
	}
	mass[Size++] = a;
}



template <class T>
T  Queue<T>::dequeue() {
		if (Size == 0 ) {
			throw runtime_error("Queue is empty");
		}

		T b = mass[0];
		for (int i = 0; i < Size - 1; i++) {
			mass[i] = mass[i + 1];
		}
		Size--;
		return b;
}

template <class T>
Queue<T>::~Queue() {
	delete[] mass;
}

template <class T>
Queue<T>& Queue<T>::operator= (const Queue& other) {
	delete[] mass;
	this->Size = other.Size;
	this->Capacity = other.Size;
	mass = new T[Capacity];

	for (int i = 0; i < Size; i++) {
		mass[i] = other.mass[i];
	}

	return *this;
}

template <class T>
ostream& operator<<(ostream & out, const Queue<T>& other)
{
	for (int i = 0; i < other.Size; i++) {
		out << other.mass[i] << " ";
	}
	return out;
}

template <class T>
istream& operator>>(istream &is, Queue<T>& other)
{
	int n = 0;
	is >> n;
	if (n < 0)
		throw std::runtime_error("n < 0");
	
	T buf;
	this->clear();
	for (int i = 0; i < n; i++) {
		is >> buf;
		other.enqueue(buf);
	}
	return is;
}


template <class T>
void  Queue<T>::clear() {
	Size = 0;
}

template <class T>
int Queue<T>::size() {
	return Size; 
}

template <class T>
int Queue<T>::capacity() {
	return Capacity;
}
#endif