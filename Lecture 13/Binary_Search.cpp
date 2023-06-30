#include<iostream>
#include<algorithm>
using  namespace std;
int target;

bool Linear(int* a, int n) {


	for (int i = 0; i < n; i++) {
		if (a[i] == target) {
			return true;
		}
	}
	return false;
}


int Lower_Bound(int *a, int n) {
	int s = 0;
	int e = n - 1;
	int ans = -1;

	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] >= target) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}

	return ans;
}

int Upper_Bound(int *a, int n) {
	int s = 0;
	int e = n - 1;
	int ans = -1;

	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] > target) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}

	return ans;
}



bool Binary_Search(int* a, int n) {
	int s = 0;
	int e = n - 1;

	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] == target) {
			return true;
		} else if (a[mid] > target) {
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}

	return false;
}

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> target;

	bool x = Linear(a, n);
	if (x) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	bool t = Binary_Search(a, n);

	if (t == 1) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	cout << Lower_Bound(a, n) << endl;
	cout << Upper_Bound(a, n) << endl;

	cout << binary_search(a + 0, a + n, target) << endl;

	cout << lower_bound(a, a + n, target) - a << endl;
	cout << upper_bound(a, a + n, target) - a << endl;

}








