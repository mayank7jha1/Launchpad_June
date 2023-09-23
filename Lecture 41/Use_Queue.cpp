#include<iostream>
#include"Queue.h"
using namespace std;
// const int N = 0;

int main() {
	int n;
	cin >> n;
	queue1<int>q(n);

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		q.push(x);
	}

	cout << q.size() << endl;
	cout << q.front1() << endl;

	while (!q.empty()) {
		cout << q.front1() << " ";
		q.pop();
	}
}