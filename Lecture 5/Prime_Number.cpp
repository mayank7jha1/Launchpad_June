#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;


	int i = 2;
	int flag = 0;

	while (i < n) {
		if (n % i == 0) {
			flag = 1;
		}
		i = i + 1;
	}

	if (flag) {
		cout << "Not Prime" << endl;
	} else {
		cout << "Prime" << endl;
	}


	// if (flag == 1) {
	// 	cout << "Not Prime" << endl;
	// } else {
	// 	cout << "Prime" << endl;
	// }

}










