#include<iostream>
using  namespace std;
int x = 20;
int y = 200;

void Change() {

	int temp = x;
	x = y;
	y = temp;

	cout << endl << endl << "INSIDE FUNCTION CHANGE " << endl;
	cout << "Value of x = " << x << endl;
	cout << "Value of y = " << y << endl;
}

int main() {


	cout << "INSIDE MAIN " << endl << endl;
	cout << "Value of x = " << x << endl;
	cout << "Value of y = " << y << endl;

	Change();

	cout << endl << endl << "INSIDE MAIN " << endl;
	cout << "Value of x = " << x << endl;
	cout << "Value of y = " << y << endl;
}

