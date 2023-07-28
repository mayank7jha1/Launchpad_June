#include<iostream>
using  namespace std;

int main() {
	int  x;
	cin >> x;

	int y = 10;

	int a[10];
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}

	cout << "Static Variable x " << x << endl;
	cout << "Static Variable y " << y << endl;

	cout << "Static Array: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	int b[] = {1, 2, 3, 4, 5};
	cout << "Static Array: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << b[i] << " ";
	}
	cout << endl;

	int *ptr = new int;
	*ptr = 100;
	cout << *ptr << endl;

	int* ptr2 = new int(120);
	cout << *ptr2 << endl;

	int* ptr3 = new int;
	cin >> *ptr3;
	cout << *ptr3 << endl;

	int* ptr4 = new int[100] {1, 2, 3, 4};

	for (int i = 0; i < 4; i++) {
		cout << ptr4[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 4; i++) {
		cout << *(ptr4 + i) << " ";
	}
	cout << endl;

	int* ptr5 = new int[100];
	int* ptr6 = new int[100] {0};

	for (int i = 0; i < 5; i++) {
		cin >> *(ptr5 + i);
	}
	for (int i = 0; i < 5; i++) {
		cin >> ptr6[i];
	}

	for (int i = 0; i < 5; i++) {
		cout << ptr5[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		cout << *(ptr6 + i) << " ";
	}


}





















