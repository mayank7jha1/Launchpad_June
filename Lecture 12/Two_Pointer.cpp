#include<iostream>
using  namespace std;

void swap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}


int main() {
	int a[] = {2, 3, 4, 1, 3, 7};

	for (int i = 0; i < 6; i++) {
		cout << a[i] << " ";
	}

	cout << endl;

	for (int i = 6 - 1; i >= 0; i--) {
		cout << a[i] << " ";
	}
	cout << endl;

	for (int i = 0, j = 6 - 1; i < j; i++, j--) {
		swap(a[i], a[j]);
	}

	for (int i = 0; i < 6; i++) {
		cout << a[i] << " ";
	}
}

















