#include "stdafx.h"
#include <iostream>	
using namespace std;

class Parent {
public:
	int age{ 20 };
	virtual void Speak() {
		cout << "Parent!" << endl;
	}
};

class Child : public Parent {
public:
	//int age{ 10 };
	void Speak() {
		cout << "Child (" << age << ")" << endl;
	}
	void Play() {
		cout << "Play~!!!" << endl;
	}
};

class Baby : public Parent {

};
int main63() {

	Parent parent;
	Child child;
	Baby baby;

	Parent *pP = &parent;
	Child *pC = &child;
	Baby *pb = &baby;
	/*
	pP = dynamic_cast<Parent*>(pC);
	if (pP == nullptr) {
		cout << "Casting failure" << endl;
	}
	else {
		cout << "Casting is okay" << endl;
		pP->Speak();
	}

	pC = dynamic_cast<Child *> (pP);
	if (pC == nullptr) {
		cout << "From parent* to child* casting failed." << endl;
	}
	else {
		cout << "From parent* to child* casting is okay." << endl;
		pC->Speak();
		pC->Play();
	}
	*/

	//Baby *out1 = static_cast<Baby*>(pC); // Compiler complaints.
	Baby *out2 = dynamic_cast<Baby*>(pC);

	if (out2 != nullptr)
		cout << "dynamic works!" << endl;

	Baby *out3 = reinterpret_cast<Baby*>(pC);

	if (out3 != nullptr)
		cout << "reinterpret works!" << endl;


	return 0;
}