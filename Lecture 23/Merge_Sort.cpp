#include<iostream>
using  namespace std;
int temp[10005];
int ansM = 0;;

void Merge(int* a, int s, int e) {
	int mid = (s + e) / 2;
	int i = s;
	int j = mid + 1;

	int k = s;

	while (i <= mid and j <= e) {
		ansM++;
		if (a[i] <= a[j]) {
			temp[k] = a[i];
			k++, i++;
		} else {
			temp[k] = a[j];
			k++, j++;
		}
	}

	while (i <= mid) {
		ansM++;
		temp[k] = a[i];
		k++, i++;
	}

	while (j <= e) {
		ansM++;
		temp[k++] = a[j++];
	}

	for (int i = s; i <= e; i++) {
		ansM++;
		a[i] = temp[i];
	}

}

void MergeSort(int* a, int s, int e) {
	if (s >= e) {
		return;
	}

	//Step:1: Divide
	int mid = (s + e) / 2;
	ansM++;
	MergeSort(a, s, mid);
	MergeSort(a, mid + 1, e);

	//Step:2: Conquer/Merge

	Merge(a, s, e);
}

int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	MergeSort(a, 0, n - 1);

	// for (int i = 0; i < n; i++) {
	// 	cout << a[i] << " ";
	// }
	// cout << endl;
	cout << ansM << endl;

}