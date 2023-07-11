#include<iostream>
using  namespace std;





void Fibonacci_Iterative(int n) {

	int x = 0, y = 1;
	int t;
	cout << x << " " << y << " ";

	for (int i = 2; i < n; i++) {
		t = x + y;
		cout << t << " ";
		x = y;
		y = t;
	}
}


int Fibonacci_Recursive(int n) {

	if (n == 0 or n == 1) {
		return n;
	}

	int Option1 = Fibonacci_Recursive(n - 1);
	int Option2 = Fibonacci_Recursive(n - 2);

	int ans = Option1 + Option2;
	return ans;
}

int main() {
	int n;
	cin >> n;

	//Fibonacci_Iterative(n);
	//cout << endl;

	//Nth Fibonacci Number:
	cout << Fibonacci_Recursive(n);
}





