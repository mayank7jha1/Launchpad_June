#include<iostream>
using  namespace std;

int Partition(int* a, int s, int e) {
	int pivot = a[e];
	int i = s - 1;

	for (int j = s; j <= e - 1; j++) {
		if (a[j] < pivot) {
			i++;
			swap(a[i], a[j]);
		}
	}

	swap(a[i + 1], a[e]);
	return i + 1;
}


void Quicksort(int* a, int s, int e) {
	if (s >= e) {
		return;
	}

	int Pivot_Index = Partition(a, s, e);

	Quicksort(a, s, Pivot_Index - 1);
	Quicksort(a, Pivot_Index + 1, e);


}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	Quicksort(a, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}