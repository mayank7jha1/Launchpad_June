#include<iostream>
using  namespace std;

int main() {
	char ch;

	int north = 0;
	int south = 0;
	int east = 0;
	int west = 0;

	while (cin >> ch) {

		if (ch == 'N') {
			north = north + 1;
		} else if (ch == 'S') {
			south = south + 1;
		} else if (ch == 'E') {
			east = east + 1;
		} else {
			west = west + 1;
		}
	}

	// cout << north << " " << south << endl;
	// cout << east << " " << west << endl;

	int y = north - south;
	int x = east - west;

	cout << x << " " << y << endl;

	if (x > 0) {
		int i = 1;

		while (i <= x) {
			cout << "E";
			i = i + 1;
		}
	} else if (x < 0) {
		int i = 1;
		x = x * (-1);

		while (i <= x) {
			cout << "W";
			i = i + 1;
		}
	}

	if (y > 0) {
		int i = 1;

		while (i <= y) {
			cout << "N";
			i = i + 1;
		}
	} else if (y < 0) {
		int i = 1;
		y = y * (-1);

		while (i <= y) {
			cout << "S";
			i = i + 1;
		}
	}

}

//x=-3
//N=4
//S=9

//N-S=-5


//E=7
//W=12

//E-W=-5

//(-5, -5)










