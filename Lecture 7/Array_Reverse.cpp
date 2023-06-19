#include<iostream>
using  namespace std;

int main() {
	int a[] = {1, 2, 3, 4, 5};
	//I want to Reverse and Print this Array.

	//a[0]=5;

	int b[5];

	//Reversing thee Array
	for (int i = 4; i >= 0; i = i - 1) {
		b[5 - i - 1] = a[i];
	}

	for (int i = 0; i < 5; i++) {
		cout << b[i] << " ";
	}

	//Copy the new array in our original array
	for (int i = 0; i < 5; i++) {
		a[i] = b[i];
	}
	cout << endl;


	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}

}