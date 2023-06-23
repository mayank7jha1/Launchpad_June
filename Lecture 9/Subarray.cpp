#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}
	int count = 0;

	for (int i = 0; i < n; i = i + 1) {

		cout << "Subarray Starting from Index " << i << endl;

		for (int j = i; j < n; j = j + 1) {

			//i=0,j=0
			//i=0,j=1
			//i=0,j=2
			//i=0,j=3
			//i=0,j=4

			for (int k = i; k <= j; k = k + 1) {
				cout << a[k] << " ";
			}
			count = count + 1;
			cout << endl;
		}
	}
	cout << "No of Subarrays are " << count << endl;
}

//i=0 se suru hone vale saare subarray print karro

















