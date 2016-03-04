#include "stdafx.h"
#include <iostream>	
#include <string>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

class Check {
public:
	bool operator()(string& str) {
		string tmp = "Hello";		
		return tmp.size() == str.size();
	}
} check5;


int main52() {
	// lambda expr and functor def.
	vector<string> nums{ "One", "Two", "Three", "Four", "Five", "Six", "Seven" };
	for (auto n : nums)
		cout << n << " ";

	cout << endl << endl;
	int count = count_if(nums.begin(), nums.end(), check5);
	cout << "Size 5 cases:";
	cout << count << endl;
	int givenSize = 4;
	
	auto check4 = [givenSize](string& str) { 
		return givenSize == str.size(); };
	count = count_if(nums.begin(), nums.end(), check4);
	cout << "Size 4 cases:";
	cout << count << endl;

	function <int(int, int)> add = [](int a, int b) { return a + b; };
	cout << endl << endl;
	cout << add(1, 2) << endl;


	cout << "given size :" << givenSize << endl;
	auto mutable_lambda = [&givenSize]() mutable {
		givenSize = 1;
		cout << "given size :" << givenSize << endl;
	};
	mutable_lambda();
	cout << "given size :"<< givenSize << endl;

	return 0;
}