#include<iostream>
using namespace std;

bool Solve(int* a, int x, int key) {

	if (x < 0) {
		//Iska Matlab hain tumne saare element ke sath compare kiya and tumko koi element
		// nahi mila why: as you have not return

		return false;
	}


	if (a[x] == key) {
		return true;
	}


	int ans = Solve(a, x - 1, key);

	return ans;

}

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int key;
	cin >> key;

	int ans = Solve(a, n - 1, key);

	if (ans == 0) {
		cout << "False" << endl;
	} else {
		cout << "True" << endl;
	}
}