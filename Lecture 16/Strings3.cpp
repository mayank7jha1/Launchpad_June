#include<iostream>
#include<algorithm>
using  namespace std;

int main() {

	string s;
	cin >> s;
	cout << s << endl;
	s.push_back('z');
	cout << s << endl;

	s = s + "abc";
	s += "abs";
	cout << s << endl;

	s.pop_back();
	cout << s << endl;

	cout << s.back() << endl;

	int n = s.length();
	cout << s[n - 1] << endl;

	char ch[] = "MayankJha";
	//I want to sort from index 2 to 6;

	sort(ch + 2, ch + 7);
	cout << ch << endl;

	string m = "MayankJha";

	sort(m.begin(), m.end());
	cout << m << endl;
	reverse(m.begin(), m.end());
	cout << m << endl;

	//Left Rotation 2 Bar
	rotate(m.begin(), m.begin() + 2, m.end());

	//Right Rotation 2 Bar
	rotate(m.begin(), m.begin() + (m.length() - 2), m.end());

	// int n;
	// cin >> n;
	// char ch[100];

	// for (int i = 0; i < n; i++) {
	// 	cin >> ch[i];
	// }
	// cin >> ch;
}