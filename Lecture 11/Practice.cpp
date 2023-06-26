#include<iostream>
using  namespace std;

int main() {
	int t;
	cin >> t;

	int i = 1;
	while (i <= t) {
		//Kaam karna hain
		int n;
		cin >> n;

		int a[n];
		for (int j = 0; j < n; j++) {
			cin >> a[j];
		}


		//ADD:
		int sum = 0;

		for (int i = 0; i < n; i++) {
			sum = sum + a[i];
		}

		cout << sum << endl;

		i = i + 1;
	}



}