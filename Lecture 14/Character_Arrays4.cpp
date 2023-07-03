#include<iostream>
using  namespace std;

int main() {

	char a[100];
	int size = 0;
	char ch;

	while (cin >> ch) {
		a[size] = ch;
		size++;
	}

	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}

}