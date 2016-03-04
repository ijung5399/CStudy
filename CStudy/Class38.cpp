#include "stdafx.h"
#include <iostream>
#include <typeinfo>
using namespace std;

class Animal {
public:
	string Name;
	int Age;
};

template <typename T>
class Box
{
public:	
	Box<T>(){}

private:
	T data;
};



int main38() {
	string i;
	cout <<"string: " << typeid(i).name() << endl;
	double d;
	cout << "double: " << typeid(d).name() << endl;
	decltype(i) x;
	cout << "X is " << typeid(x).name() << endl;
	decltype(d) y;
	cout << "Y is " << typeid(y).name() << endl;
	
	Animal ani;
	cout << "Animal class is " << typeid(ani).name() << endl;

	Box<int> c;
	cout << "Box<int> is " << typeid(c).name() << endl;
	return 0;
}