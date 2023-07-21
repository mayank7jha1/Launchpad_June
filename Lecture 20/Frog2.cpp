#include<iostream>
#include<climits>
using namespace std;

//Solve(height,x,k)== min value to reach the xth stone.


int Solve(int* height, int x, int k) {

	if (x <= 0) {
		return 0;
	}

	int Option = INT_MAX;

	for (int i = 1; i <= k; i++) {

		if (x - i >= 0) {
			Option = min(Option, abs(height[x] - height[x - i]) + Solve(height, x - i, k));
		}
	}

	return Option;

}

int main() {
	int n, k;
	cin >> n >> k;

	int height[n];
	for (int i = 0; i < n; i++) {
		cin >> height[i];
	}

	cout << Solve(height, n - 1, k) << endl;

}


