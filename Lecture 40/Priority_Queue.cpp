#include<iostream>
#include<queue>
using  namespace std;
//Running Stream of Data;

int main() {
	int n;
	cin >> n;

	//Maximum Priority Queue
	priority_queue<int>pq;

	//Minimum Priority Queue
	priority_queue<int, vector<int>, greater<int>>pq1;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		pq.push(x);
		pq1.push(x);
	}

	while (!pq.empty()) {
		int t = pq.top();
		pq.pop();
		cout << t << " ";
	}
	cout << endl;

	while (!pq1.empty()) {
		int t = pq1.top();
		pq1.pop();
		cout << t << " ";
	}
}








