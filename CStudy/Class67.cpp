#include "stdafx.h"
#include <iostream>	
#include <memory>
using namespace std;
class Test67 {

public:
	Test67() {
		cout << "Created." << endl;
	}
	void Show() {
		cout << "Here!" << endl;
	}
	~Test67() {
		cout << "Bye~!" << endl;
	}
};
class Box67 {
private:
	unique_ptr<Test67[]> ptr;
public:
	Box67() : ptr(new Test67[2]) {}
};
int main() {
	{
		unique_ptr<Test67> pTest(new Test67);
		pTest->Show();
	}

	{
		auto_ptr<Test67> pTest1(new Test67);
		pTest1->Show();
	}
	cout << "===============" << endl;
	{
		unique_ptr<Test67[]> pTest2(new Test67[3]);
		pTest2[1].Show();
	}
	cout << "Done" << endl;
	cout << "===============" << endl;
	Box67 myBox;
	cout << "Unique_ptr can handle arrays!!!" << endl;
	return 0;
}