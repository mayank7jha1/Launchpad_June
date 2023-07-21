#include<iostream>
#include<climits>
using namespace std;

//Solve(height,x)==min value to reach the xth stone.


int Solve(int* height, int x) {

	if (x <= 0) {
		return 0;
	}

	/*
		We are applying recursion from end:
		And hence are assuming we are standing at the last
		stone i.e n-1th stone but since we have passed n-1
		from the bottom so we are saying we are currently standing
		at the xth stone which is the last stone.
	*/

	int Option1 = INT_MAX, Option2 = INT_MAX;

	if (x - 1 >= 0) {
		Option1 = abs(height[x] - height[x - 1]) + Solve(height, x - 1);
	}

	if (x - 2 >= 0) {
		Option2 = abs(height[x] - height[x - 2]) + Solve(height, x - 2);
	}


	int ans = min(Option1, Option2);
	return ans;

}

int main() {
	int n;
	cin >> n;

	int height[n];
	for (int i = 0; i < n; i++) {
		cin >> height[i];
	}

	cout << Solve(height, n - 1) << endl;

}


//_ _