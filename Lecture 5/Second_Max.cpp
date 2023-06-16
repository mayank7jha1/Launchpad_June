#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int i = 1;
	int t;
	int maxi = -101;

	while (i <= n) {

		cin >> t;
		if (t > maxi) {
			maxi = t;
		}

		i = i + 1;
	}
	cout << maxi << endl;
}