#include "stdafx.h"
#include <string>
#include <iostream>	
#include <vector>
using namespace std;

int main44() {
	class C {
	public:
		string text;
		int id;
	} c2, c3 = { "No", 1 };

	C c1 = { "ilmo", 44 };
	cout << c1.text << endl;
	c2.text = "hi";
	cout << c2.text << endl;
	cout << c3.text << ", " << c3.id << endl;

	//vector<string> strings = { "one", "two", "three!" };
	vector<string> strings { "one", "two", "three!" };
	for(auto s : strings)
	{
		cout << s << endl;
	}
	cout << "-----------" << endl;
	string txt1{ "oh ho..." };
	cout << txt1 << endl;

	int *pInts = new int[3]{1,2,3 };
	cout << pInts[2] << endl;
	delete[] pInts;

	C c5{ "5",5 };
	cout << c5.text << ", " << c5.id << endl;
	return 0;
}