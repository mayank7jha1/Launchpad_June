#include<iostream>
#include<vector>
#include<algorithm>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(a, a + n);
	sort(v.begin(), v.end());

	reverse(a, a + n);
	reverse(v.begin(), v.end());

	string str = "Mayank";
	sort(str.begin(), str.end());
	reverse(str.begin(), str.end());

	str.push_back('t');
	cout << str << endl;
	str.pop_back();
	cout << str << endl;

}