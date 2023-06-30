#include<iostream>
using  namespace std;


bool Basic(int *a, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			int sum = 0;
			for (int k = i; k <= j; k++) {
				sum += a[k];
			}
			if (sum == 0) {
				return true;
			}
		}
	}
	return false;
}

bool Best(int* a, int n) {

	int pre[n + 1] = {0};

	pre[0] = a[0];
	for (int i = 1; i < n; i++) {
		pre[i] = pre[i - 1] + a[i];
	}

	int freq[100005] = {0};

	for (int i = 0; i < n; i++) {
		int value = pre[i];
		freq[value]++;
	}

	if (freq[0] >= 1) {
		return true;
	} else {
		for (int i = 1; i < 100005; i++) {
			if (freq[i] > 1) {
				return 1;
			}
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

	bool x = Basic(a, n);

	if (x == 1) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	bool y = Best(a, n);
	if (y == 1) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}






