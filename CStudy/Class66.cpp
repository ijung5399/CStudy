#include "stdafx.h"
#include <iostream>	
#include <functional> // for binding...!
using namespace std;
using namespace placeholders;

int add(int a, int b, int c) {
	cout << a << ", " << b << ", " << c << endl;
	return a + b + c;
}
bool check(int a, int b, int c) {
	return a + b == c;
}
void run(function<int(int, int)> fx) {
	cout << "10 + " << 13 << " = 23 ? " << fx(23, 13) << endl;
	cout << "10 + " << 41 << " = 51 ? " << fx(51, 41) << endl;
}

class Test66 {
public:
	int add(int a, int b, int c) {
		cout << a << ", " << b << ", " << c << endl;
		return a + b + c;
	}
};
int main66() {
	cout << add(1, 2, 3) << endl;



	auto calc = bind(add, 3, 4, 5);
	cout << calc() << endl;

	auto calc1 = bind(add, _1, _2, _3); // _1 ... are placeholders.
	cout << calc1(10, 20, 30) << endl;

	auto check0 = bind(check, 10, _2, _1);
	cout << check0(21, 11) << endl;

	run(check0);

	Test66 test;
	auto myfx = bind(&Test66::add, test, 1, 2, 3);
	cout << myfx() << endl;
	return 0;
}