#include<iostream>
using  namespace std;

bool IsSorted(int *a, int index, int x) {

	if (index == x) {
		return true;
	}


	if (a[index] > a[index + 1]) {
		return false;
	}

	int ans = IsSorted(a, index + 1, x);
	return ans;

}

int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << IsSorted(a, 0, n - 1) << endl;
}






