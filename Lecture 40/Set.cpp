#include<iostream>
#include<set>
#include<unordered_set>
//RBT: Self Balancing Trees:
using  namespace std;

int main() {
	int n;
	cin >> n;
	set<int>s;
	unordered_set<int>us;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s.insert(x);
		us.insert(x);

	}

	for (auto x : s) {
		cout << x << " ";
	}
	cout << endl;

	for (auto x : us) {
		cout << x << " ";
	}
	cout << endl;

	if (us.find(7) != us.end()) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	if (us.count(17) == 1) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}


}

//Map : Key and Value:

//Set: Key