#include<iostream>
using  namespace std;
int ansB = 0, ansS = 0, ansI = 0;

void Bubblesort(int* a, int n) {
	bool flag = 0;

	for (int i = 0; i <= n - 2; i = i + 1) {
		flag = 0;
		for (int j = 0; j <= n - i - 2; j = j + 1) {
			ansB++;
			if (a[j] > a[j + 1]) {
				ansB++;
				flag = 1;
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;

			}

		}
		if (flag == 0) {
			break;
		}
	}
}

void InsertionSort(int* a, int n) {

	for (int i = 1; i < n; i++) {
		int x = a[i];
		int j = i - 1;
		ansI++;
		while (a[j] > x  and j >= 0) {
			ansI++;
			a[j + 1] = a[j];
			j = j - 1;
		}
		ansI++;
		a[j + 1] = x;
	}

}

void SelectionSort(int* a, int n) {
	for (int i = 0; i <= n - 2; i = i + 1) {
		ansS++;
		int minimum_element_index = i;

		for (int j = i + 1; j < n; j = j + 1) {
			ansS++;
			if (a[j] < a[minimum_element_index]) {
				ansS++;
				minimum_element_index = j;
			}
		}
		ansS ++;
		int temp = a[i];

		a[i] = a[minimum_element_index];

		a[minimum_element_index] = temp;
	}
}


int main() {
	int n;
	cin >> n;
	int a[n], b[n], c[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}

	InsertionSort(a, n);
	Bubblesort(c, n);
	SelectionSort(b, n);

	// cout << endl << "Insertion Sort " << endl;

	// for (int i = 0; i < n; i++) {
	// 	cout << a[i] << " ";
	// }
	// cout << endl << endl << "Selection Sort " << endl;

	// for (int i = 0; i < n; i++) {
	// 	cout << b[i] << " ";
	// }
	// cout << endl << endl << "Bubblesort Sort " << endl;

	// for (int i = 0; i < n; i++) {
	// 	cout << c[i] << " ";
	// }
	// cout << endl << endl;

	cout << "The Computation in Bubble Sort is" << endl;
	cout << ansB << endl;

	cout << "The Computation in Insertion Sort is" << endl;
	cout << ansI << endl;

	cout << "The Computation in Selection Sort is" << endl;
	cout << ansS << endl;



}
