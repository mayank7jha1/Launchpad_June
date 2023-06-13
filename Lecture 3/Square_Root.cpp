#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	if (n == 0) {
		cout << n << endl;
		return 0;
	}

	if (n == 1) {
		cout << n << endl;
		return 0;
	}

	int i = 1; int ans = 1;

	while (ans <= n) {
		i = i + 1;
		ans = i * i;
	}

	cout << i - 1 << endl;


}

















