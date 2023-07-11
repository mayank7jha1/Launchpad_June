#include<iostream>
using  namespace std;

int Sum1(int* a, int n1) {

	if (n1 == 0) {
		return 0;
	}

	int ans = a[n1 - 1] + Sum1(a, n1 - 1);
	return ans;
}
int Sum2(int* a, int n1) {

	if (n1 == 1) {
		return a[0];
	}

	int ans = a[n1 - 1] + Sum2(a, n1 - 1);
	return ans;
}

int Sum3(int* a, int n1) {

	if (n1 < 0) {
		return 0;
	}

	int ans = a[n1] + Sum3(a, n1 - 1);
	return ans;
}

int Sum4(int* a, int n1) {

	if (n1 == 0) {
		return a[0];
	}

	int ans = a[n1] + Sum4(a, n1 - 1);
	return ans;
}

int Sum5(int* a, int n1, int x) {

	if (x == n1) {
		return 0;
	}

	int ans = a[x] + Sum5(a, n1, x + 1);
	return ans;
}

int Sum6(int* a, int n1, int x) {

	if (x == n1 - 1) {
		return a[x];
	}

	int ans = a[x] + Sum6(a, n1, x + 1);
	return ans;
}

int Sum7(int* a, int n1, int x) {

	if (x == n1 + 1) {
		return 0;
	}

	int ans = a[x - 1] + Sum7(a, n1, x + 1);
	return ans;
}

int Sum8(int* a, int n1, int x) {

	if (x == n1) {
		return a[x - 1];
	}

	int ans = a[x - 1] + Sum8(a, n1, x + 1);
	return ans;
}

int Sum9(int* a, int n1, int x) {

	if (x == n1 + 1) {
		return 0;
	}

	int ans = a[x] + Sum9(a, n1, x + 1);
	return ans;
}




int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//Type 1: We want Sum from end.
	cout << Sum1(a, n) << endl;

	//Type 1.1: We want sum from end and Changing
	//the  stoping  condition.
	cout << Sum2(a, n) << endl;


	//Type 1.2: Where aapne niche se  n-1 ko
	//Bheja: Start is n-1.

	cout << Sum3(a, n - 1) << endl;

	//Type 1.3: We want sum from end and Changing
	//the  stoping  condition.
	cout << Sum4(a, n - 1) << endl;

	//Type 2: We want sum from the start

	cout << Sum5(a, n, 0) << endl;

	//Type 2.1: We want sum from start and Changing
	//the  stoping  condition.
	cout << Sum6(a, n, 0) << endl;


	//Type 2.3: We want sum from start
	cout << Sum7(a, n, 1) << endl;

	//Type 2.4: We want sum from start and Changing
	//the  stoping  condition.
	cout << Sum8(a, n, 1) << endl;

	//Type 2.5: We want sum from start
	cout << Sum9(a, n - 1, 0) << endl;



}








