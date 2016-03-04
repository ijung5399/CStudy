#include "stdafx.h"
#include <iostream>	
#include <vector>
using namespace std;

int main40() {
	//char texts[] = { "one", "two", "three" };
	auto texts = { "one", "two", "three" };

	for (auto text : texts) {
		cout << text << endl;
	}

	vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);

	for (auto n : numbers) {
		cout << n << endl;
	}

	string hello = "Hello";
	for (auto s : hello) {
		cout << s << endl;
	}
	return 0;
}