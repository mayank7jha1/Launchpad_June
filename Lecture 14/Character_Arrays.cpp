#include<iostream>
#include<algorithm>
using  namespace std;

int* Solve(int* a, int n) {
	for (int i = 0; i < n; i++) {
		a[i] += 10;
	}
	return a;
}


int main() {
	int a[] = {5, 6, 7, 8, 9, 10, 11};


	//Sizeof
	cout << sizeof(int) << endl;
	cout << sizeof(bool) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(float) << endl;

	cout << sizeof(a) << endl;

	int n = sizeof(a) / sizeof(int);
	int n1 = sizeof(a) / sizeof(a[0]);

	cout << n << " " << n1 << endl;

	// for (int i = 0; i < n; i++) {
	// 	a[i] += 10;
	// }


	int* ptr = Solve(a, n);

	for (int i = 0; i < n; i++) {
		cout << *(ptr + i) << " ";
	}
	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << ptr[i] << " ";
	}

}














