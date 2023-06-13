#include<iostream>
using  namespace std;

int main() {
	float x = 10.97;//Implicit TypeCasting

	cout << (int)(x / 3) << endl;//Explicit Typecasting

	int y = 11;
	cout << (11 / 3) << endl;

	double l = 98.667;
	cout << l / 3 << endl;

	int z = l / 3;

	cout << z << endl;

	cout << (int)(z) << endl;

	cout << z << endl;

	int ch = 65;

	cout << (char)ch << endl;

	char p = 'a';
	cout << (int)p << endl;

	int ch2 = p;
	cout << ch2 << endl;


}




