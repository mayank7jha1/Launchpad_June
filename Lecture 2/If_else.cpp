#include<iostream>
using  namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (a > c and a > b) {
		cout << a << endl;
	} else if (b > a and b > c) {
		cout << b << endl;
	} else {
		cout << c << endl;
	}
}