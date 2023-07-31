#include<iostream>
#include<vector>
using  namespace std;

int Sum(vector<char>&t) {
	int sum = 0;
	for (int i = 0; i < t.size(); i++) {
		sum += (int)t[i];
	}
	return sum;
}

vector<char>Solve(vector<char>m) {
	for (int i = 0; i < m.size(); i++) {
		m[i] += 1;
	}
	return m;
}


int main() {
	vector<char>v;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		char x;
		cin >> x;
		v.push_back(x);
	}

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	cout << v.back() << endl;
	cout << v.front() << endl;
	v.pop_back();

	cout << v.size() << endl;

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	cout << v.capacity() << endl;

	vector<char>m = v;

	for (int i = 0; i < m.size(); i++) {
		cout << m[i] << " ";
	}
	cout << endl;


	cout << Sum(m) << endl;


	vector<char>ans = Solve(m);

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
	cout << endl;


}












