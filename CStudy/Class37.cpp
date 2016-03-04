#include "stdafx.h"
#include <iostream>	

using namespace std;
struct Test {
	virtual bool operator()(string &text) = 0;
	virtual ~Test() {};
};
// "Functor"
struct MatchTest : public Test { // struct is by default public. so better to use than class.
	bool operator()(string &text) {
		return text == "lion";
	}
};

struct CatTest : public Test { // struct is by default public. so better to use than class.
	bool operator()(string &text) {
		return text == "cat";
	}
};
void check(string test, Test &tool) {
	if (tool(test))
		cout << "Yes!" << endl;
	else
		cout << "No!" << endl;
}
int main37()
{
	MatchTest pred;
	string text = "lion";
	cout << pred(text) << endl;
	cout << pred((string)"line") << endl;
	cout << "------------" << endl;
	
	check(text, pred);

	CatTest cpred;
	check(text, cpred);
    return 0;
}

