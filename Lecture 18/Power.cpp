#include<iostream>
using  namespace std;



int Power_Recursive(int x, int y) {

	if (y < 1) {
		return 1;
	}

	int ans = 1;

	int p = Power_Recursive(x, y - 1);
	ans = p * x;

	return ans;

}

int Power_Recursive2(int x, int y, int i) {

	if (i > y) {
		return 1;
	}

	int p = Power_Recursive2(x, y, i + 1);
	int ans = p * x;

	return ans;

}

int Power_Iterative(int x, int y) {
	int ans = 1;
	for (int i = 1; i <= y; i++) {
		ans = ans * x;
	}
	return ans;
}

int main() {
	int x, y;
	cin >> x >> y;

	cout << Power_Iterative(x, y) << endl;
	cout << Power_Recursive(x, y) << endl;
	cout << Power_Recursive2(x, y, 1) << endl;
}