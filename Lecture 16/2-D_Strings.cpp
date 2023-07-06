#include<iostream>
#include<string>
#include<algorithm>
using  namespace std;

int main() {
	int n;
	cin >> n;

	string s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	sort(s, s + n);

	sort(s[0].begin(), s[0].end());

	//cout << s[1][2] << endl;

	for (int i = 0; i < n; i++) {
		cout << s[i] << " ";
	}
}







