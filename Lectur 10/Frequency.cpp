#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int freq[100001] = {0};

	for (int i = 0; i < n; i++) {

		int value = a[i];

		freq[value] = freq[value] + 1;
	}

	for (int i = 0; i < 100001; i++) {
		if (freq[i] > 0) {
			cout << "Frequency of the element " << i <<
			     " is " << freq[i] << endl;
		}
	}
}