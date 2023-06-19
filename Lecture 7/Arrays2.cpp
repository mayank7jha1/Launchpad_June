#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	//int a[n];

	int x = 0;

	int a[5] = {3, 5, 6, 8, 9};

	for (int i = 0; i < 5; i = i + 1) {
		cout << a[i] << " ";
	}

	cout << endl;

	for (int i = 4; i >= 0; i = i - 1) {
		cout << a[i] << " ";
	}



}