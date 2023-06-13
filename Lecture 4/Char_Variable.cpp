#include<iostream>
using  namespace std;

int main() {
	char ch = 'a';

	char ch2;
	cin >> ch2;

	cout << ch2 << endl;

	int t;
	int n;
	cin >> n;
	int i = 1;
	int sum = 0;
	while (i <= n) {

		cin >> t;
		sum = sum + t;
		i = i + 1;
	}
	cout << sum << endl;

}