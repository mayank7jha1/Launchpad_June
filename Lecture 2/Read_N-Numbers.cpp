#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int i = 1;
	int sum = 0;

	while (i <= n) {
		int t;
		cin >> t;
		//int sum = 0;Because we don't want sum variable to be
		//zero for every input.
		//sum = 0;
		sum = sum + t;
		i = i + 1;
	}

	cout << sum / n << endl;
}