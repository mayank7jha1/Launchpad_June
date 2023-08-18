#include<iostream>
#include<queue>
using  namespace std;

int main() {
	queue<int>q;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		q.push(x);//Insert At Last O(1)
	}

	cout << q.empty() << endl;

	// if aapka queue empty hain to ye 1 dega
	// and agar aapka queue empty nahi  hain to ye 0
	//dega.

	// while (q.empty()==0) {

	// }

	// != == > ulta kardeta hain.

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();//O(1)
	}

}

