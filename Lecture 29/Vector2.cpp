#include<iostream>
#include<vector>
using  namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5, 6};
	int* ptr = new int[] {3, 4, 5, 6, 7, 8};

	vector<int>b{10, 11, 12, 13, 14};

	vector<int>c = b;

	int n;
	cin >> n;

	vector<int>e;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		e.push_back(x);

		// You cannot use like this
		// cin >> e[i];
	}

	for (int i = 0; i < 5; i++) {
		cout << e[i] << " ";
	}
	cout << endl;

	vector<int>d(5);

	for (int i = 0; i < 5; i++) {
		cin >> d[i];
	}

	for (int i = 0; i < 5; i++) {
		cout << d[i] << " ";
	}

	vector<int>f(10);

	for (int i = 0; i < 10; i++) {
		f[i] = 25;
	}
	cout << endl;

	vector<int>g(10, 35);

	for (int i = 0; i < 10; i++) {
		cout << g[i] << " ";
	}
}









