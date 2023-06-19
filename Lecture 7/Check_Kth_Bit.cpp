#include<iostream>
using  namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int count = 1;

	while (n != 0) {
		int bit = n % 2;
		if (count == k) {
			cout << bit << endl;
			return 0;
		}
		count = count + 1;
		n = n / 2;
	}

	cout << "Not Possible" << endl;
}