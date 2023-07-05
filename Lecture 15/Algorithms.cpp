#include<iostream>
#include<algorithm>
#include<climits>
using  namespace std;

int main() {
	int a = 10, b = 20, t = 90;

	int ans = INT_MIN;

	if (a > b) {
		ans = a;
	} else {
		ans = b;
	}
	cout << ans << endl;

	int ans2 = max(a, b);
	cout << ans2 << endl;
	cout << max(a, b) << endl;

	cout << max(a, max(b, t)) << endl;

	// {}
	cout << max({a, b, t}) << endl;

	cout << min({a, b, t}) << endl;

	swap(a, b);
	cout << a << " " << b << endl;

	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int n1 = 7;
	int k = 2;

	//Left rotation k times:
	rotate(arr, arr + k, arr + n1);

	for (int i = 0; i < 7; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	int arr2[] = {1, 2, 3, 4, 5, 6, 7};

	//Right Rotation k Times:
	rotate(arr2, arr2 + (n1 - k), arr2 + n1);

	for (int i = 0; i < 7; i++) {
		cout << arr2[i] << " ";
	}
}


































