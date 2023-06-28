#include<iostream>
using  namespace std;

void Change(int &x, int &y) {

	int temp = x;
	x = y;
	y = temp;

	cout << endl << endl << "INSIDE FUNCTION CHANGE " << endl;
	cout << "Value of x = " << x << endl;
	cout << "Value of y = " << y << endl;
}

int main() {
	int x = 20;
	int y = 200;

	cout << "INSIDE MAIN " << endl << endl;
	cout << "Value of x = " << x << endl;
	cout << "Value of y = " << y << endl;

	Change(x, y);

	cout << endl << endl << "INSIDE MAIN " << endl;
	cout << "Value of x = " << x << endl;
	cout << "Value of y = " << y << endl;
}

