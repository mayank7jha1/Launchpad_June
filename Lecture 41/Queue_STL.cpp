#include<bits/stdc++.h>
using namespace std;
const int N = 0;

int main() {
	int n;
	cin >> n;
	queue<int>q;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		q.push(x);
	}

	cout << q.size() << endl;
	cout << q.front() << endl;

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
}