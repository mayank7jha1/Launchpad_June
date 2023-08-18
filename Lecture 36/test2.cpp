#include<iostream>
using  namespace std;
// int xy = 100;

void Solve(int x, int &xy) {



	if (x == 0) {
		return;
	}

	xy++;
	cout << xy << endl;
	//cout << x << " ";
	Solve(x - 1, xy);
}

void Solve2(int x) {

	if (x == 0) {
		return;
	}
	static int  xy = 100;

	xy++;
	cout << xy << endl;
	//cout << x << " ";
	Solve2(x - 1);
}




int main() {
	int x = 4;
	// int z = 100;
	Solve2(x);
}