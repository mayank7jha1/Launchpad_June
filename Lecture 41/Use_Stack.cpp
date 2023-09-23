#include<iostream>
#include"Stack.h"
using namespace std;


int main() {
	int n;
	cin >> n;
	Stack1<int>s(n);

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s.push(x);
	}

	cout << s.size() << endl;
	cout << s.top1() << endl;

	while (!s.empty()) {
		cout << s.top1() << " ";
		s.pop();
	}
}