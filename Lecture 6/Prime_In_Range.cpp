#include<iostream>
using  namespace std;

int main() {

	// int i = 1;
	// int n;
	// cin >> n;

	// while (i <= n) {
	// 	cout << i << " ";
	// 	i = i + 1;
	// }


	//Check if n is prime or not
	// int n;
	// cin >> n;

	// int i = 2;
	// while (i < n) {
	// 	if (n % i == 0) {
	// 		cout << "Not Prime" << endl;
	// 		return 0;
	// 	}
	// 	i = i + 1;
	// }

	// cout << "Prime" << endl;


//Check if n is prime or not
	// int n;
	// cin >> n;
	// int flag = 0;

	// int i = 2;
	// while (i < n) {
	// 	if (n % i == 0) {
	// 		flag = 1;
	// 	}
	// 	i = i + 1;
	// }

	// if (flag == 0) {
	// 	cout << "Prime" << endl;
	// } else {
	// 	cout << "Not Prime" << endl;
	// }


	int i = 3;
	int n;
	cin >> n;
	int flag = 0;

	while (i <= n) {

		//Number is i:
		//Check karo if i is prime or not
		flag = 0;
		int t = 2;
		while (t < i) {
			if (i % t == 0) {
				flag = 1;
			}
			t = t + 1;
		}
		if (flag == 0) {
			cout << i << endl;
		}

		i = i + 1;
	}





}











