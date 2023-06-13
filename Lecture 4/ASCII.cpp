#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	char t;
	int i = 1;
	int count = 0;

	while (i <= n) {
		cin >> t;

		if (t >= 65) {
			if (t <= 90) {
				count = count + 1;
			}
		}

		i = i + 1;
	}
	cout << count << endl;
}






