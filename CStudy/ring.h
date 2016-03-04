#pragma once
#include <iostream>
#include <typeinfo>
using namespace std;
template<typename T>
class ring
{
private:
	int capacity;
	int nextPointer;
	T* list;
public:
	ring(){
		nextPointer = 0;
		capacity = 0;
		list = nullptr;
	}
	ring(int size): capacity(size), nextPointer(0){
		list = new T[capacity];
	}

	void add(T data) {
		if (capacity > 0) {
			if (nextPointer >= capacity)
				nextPointer -= capacity;
			*(list+nextPointer) = data;
			nextPointer++;
		}
	}

	int size() const {
		return capacity;
	}

	T &get(int index) const {
		while (index >= capacity)
			index -= capacity;
		return *(list+index);
	}
		
	virtual ~ring() {
		delete[] list;
	};

	class iterator;

	iterator& begin() {
		return iterator(list);
	}
	iterator& end() {
		return iterator(list+capacity);
	}
};

template<typename T>
class ring<T>::iterator {
private:
	T* pointer;
public:
	iterator(){}
	iterator(T* ptT) {
		pointer = ptT;
	}
	T &operator*() {
		return *pointer;
	}
	iterator &operator++(int /* other */){ // prefix ++ operator: iterator &operator++(){}
		pointer++;
		return *this;
	}
	iterator &operator++( /* other */) { // for(auto x: xx) uses this operator.
		pointer++;
		return *this;
	}

	bool operator!=(const iterator other) const{
		return pointer != other.pointer;
	}	
};