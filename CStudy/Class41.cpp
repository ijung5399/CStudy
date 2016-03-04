#include "stdafx.h"
#include <iostream>	
#include <string>
#include "ring.h"
using namespace std;

int main41() {

	ring<string> textring(3);
	ring<string>::iterator it;

	textring.add("one");
	textring.add("two");
	textring.add("three");
	textring.add("four");

	for (auto txt : textring) {
		cout << txt << endl;
	}


	/*for (int i = 0; i < textring.size(); i++){
		cout << textring.get(i) << endl;
	}*/

	for (auto it = textring.begin(); it != textring.end(); it++)
	{
		cout << *it << endl;
	}
	
	cout << "=============" << endl;
	ring<float> floatring(4);
	floatring.add(3.1);
	floatring.add(3.2);
	floatring.add(3.3);
	floatring.add(3.4);
	floatring.add(3.5);
	floatring.add(3.6);

	for (auto f : floatring) {
		cout << f << endl;
	}
	
	return 0;
}