#include<iostream>
using  namespace std;

int SumRecursively(int* a, int n) {

	if (n == 0) {
		return 0;
	}


	//Aap recursion ko bol rahe ho ki sum laake do 0 se n-2 tak ka.
	int chota_sum = SumRecursively(a, n - 1);

	int total_sum = chota_sum + a[n - 1];

	return total_sum;
}

int SumRecursively2(int* a, int n) {

	if (n < 0) {
		return 0;
	}

	int chota_sum = SumRecursively2(a, n - 1);
	int  total_sum = chota_sum + a[n];

	return total_sum;
}



int SumIterative(int* a, int n) {

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}

int main() {
	int n;
	cin >> n;


	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << SumIterative(a, n) << endl;

	//Aap chahte ho 0 index se n-1 tak ka sum.
	cout << SumRecursively(a, n) << endl;

	cout << SumRecursively2(a, n - 1) << endl;
}