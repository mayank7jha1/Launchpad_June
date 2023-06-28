#include<iostream>
using  namespace std;

void sum(int* x) {
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		//sum += *(x + i);

		sum += x[i];
		x[i] += 10;
	}
	cout << sum << endl;
}

int main() {
	int a[] = {1, 2, 3, 4, 5};


	cout << a << endl;
	cout << *(a + 1) << endl;

	//Lin 12 and 13 are same.
	cout << *(a + 2) << endl;
	cout << a[2] << endl;

	sum(a);

	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}

}








