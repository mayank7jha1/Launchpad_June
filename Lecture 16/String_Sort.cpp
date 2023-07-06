#include<iostream>
#include<algorithm>
#include<string>
using  namespace std;

bool compare(string x, string y) {

	int t = x.find(y);
	int m = y.find(x);

	if (m == 0 or t == 0) {
		if (x.length() > y.length()) {
			return true;
		} else {
			return false;
		}
	} else {
		if (x < y) {
			return true;
		} else {
			return false;
		}
	}
}

int main() {
	int n;
	cin >> n;
	string s[n];

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	sort(s, s + n, compare);

	for (int i = 0; i < n; i++) {
		cout << s[i] << endl;
	}
}










