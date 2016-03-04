#include "stdafx.h"
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int g_Score[2];

typedef int Rock;
struct Scissors {};
class Paper {};

bool beats(const Rock&, const Scissors&) { return true; }
bool beats(const Scissors&, const Paper&) { return true; }
bool beats(const Paper&, const Rock&) { return true; }

template <typename TA, typename TB>
bool beats(const TA&, const TB&) { return false; }

class Round {
public:

	/*template <typename TA, typename TB>
	Round(const TA& p0, const TB& p1) {
		g_Score[beats(p1, p0)]++;
	}

	template <typename TA, typename TB>
	Round(TA p0, TB p1) {
		g_Score[beats(p1, p0)]++;
	}*/

	/*Round(Rock r, Scissors s) {
		cout << "hit here !!!!" << endl;
	}*/
};

class Box01 {};
Box01 GiveMeBox(){
	return Box01();
}
int main_quiz02() {
	Box01 b01(Rock(), Scissors());
	Round r0(Box01());
	//Round r1(GiveMeBox(), GiveMeBox());
	
	Round round1(Rock(), Scissors());
	/*Round round2(Rock(), Rock());
	Round round3(Paper(), Scissors());
	Round round4(Rock(), Paper());
	Round round5(Paper(), Paper());
	*/
	std::string winner = "Nobody";
	if (g_Score[0] > g_Score[1]) winner = "Luke Skywalker";
	if (g_Score[1] > g_Score[0]) winner = "Darth Vader";
	std::cout << winner << " wins!\n";

	return 0;
}