#include<bits/stdc++.h>
using namespace std;
const int N = 0;

int main() {
	int a[] = {1, 1, 1, 1, 1, 2, 2, 3, 4, 4, 5, 7, 8, 8, 9, 9, 0, 0, 8, 9, 9, 1, 1, 1, 1, 1, 1, 12, 2, 3, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);
	set<int>st;

	for (int i = 0; i < n; i++) {
		st.insert(a[i]);
	}

	cout << st.size() << endl;

	for (auto x : st) {
		cout << x << " ";
	}
	cout << endl;
	cout << *(st.lower_bound(7)) << endl;
	cout << *(st.upper_bound(7)) << endl;


	//Map and set function c++ reference.

}

//Set map priority pair stl