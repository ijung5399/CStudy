#include "stdafx.h"
#include <iostream>	
using namespace std;

class Test65{

};
template<typename T>
void call(T &&arg) {
	check(arg);
}
template<typename T>
void call2(T &&arg) { //perfect forwarding case
	//check(static_cast<T>(arg)); //or
	check(forward<T>(arg)); // perfect forwarding key!!!
}
void check(Test65 &test) {
	cout << "lvalue" << endl;
}
void check(Test65 &&test) {
	cout << "rvalue" << endl;
}
int main65() {
		
	Test65 test;
	auto &&t = test; // if 'auto' becomes lvalue type but it is related to a ravlue,
	// then, reference collapse happens. Then t becomes a lvalue.
	call(Test65());
	call(t);

	call2(Test65());
	call2(t);
	return 0;
}