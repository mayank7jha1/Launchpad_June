#include<iostream>
using  namespace std;

int main() {
	int x;
	cin >> x;

	if (x == 2) {
		cout << "NO" << endl;
		// return 0;
	}

	else if (x % 2 == 0) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}