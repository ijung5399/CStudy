#include "stdafx.h"
#include <iostream>	
using namespace std;

template <class T> // <-- The true power of decltype() is with the template !
auto test(T value1, T value2) -> decltype(value1) {
	return value1 + value2;
}

int get() {
	return 99;
}

auto test2() -> decltype(get()) { // <-- What a brilliant syntax!!!
	return get();
}
int main39() {
	auto value = 7;
	cout << typeid(value).name() << endl;

	auto str = "hello Ilmo.";
	cout << typeid(str).raw_name() << endl;
	cout << typeid(str).name() << endl;

	cout << test(1.0, 2.0) << endl;
	cout << test2() << endl;
	return 0;
}