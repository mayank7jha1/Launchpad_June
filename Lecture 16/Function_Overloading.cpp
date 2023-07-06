#include<iostream>
using  namespace std;

//Function Overloading:

//Type of Arguments
//Number of Arguments
//Return Type


int Sum(int a, int b) {
	return a + b;
}

double Sum(double a, double b) {
	return a + b;
}

double Sum(int a, int b, double tt) {
	return a + b + tt;
}

int main() {
	int x, y;
	cin >> x >> y;

	double tt = 100.9;
	double xx = 201.7;

	cout << Sum(x, y) << endl;
	cout << Sum(tt, xx) << endl;
	cout << Sum(x, y, tt) << endl;

	//Operator Overloading of '+' operator

	int x1 = 20;
	int y1 = 30;
	cout << x1 + y1 << endl;

	string s = "Mayank";
	string t = "Samyak";
	cout << s + t << endl;
}