#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int key;
	cin >> key;

	for (int i = 0; i < n; i++) {
		if (a[i] == key) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;

	// int x;
	// int n;
	// cin >> n;
	// int a[n];
	// int i = 0;
	// while (cin >> x) {
	// 	a[i] = x;
	// 	i = i + 1;
	// }

}






