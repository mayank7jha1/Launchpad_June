#include<iostream>
using  namespace std;
char x, y;

void Replace(string &s, int index) {
	if (index == s.length()) {
		return;
	}

	if (s[index] == x) {
		s[index] = y;
	}

	Replace(s, index + 1);
}


int main() {
	string s;
	cin >> s;
	cin >> x >> y;
	Replace(s, 0);

	cout << s << endl;
}