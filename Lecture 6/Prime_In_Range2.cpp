
#include<iostream>
using  namespace std;

int main() {
	int i = 3;
	int n;
	cin >> n;
	int flag = 0;
	// int t;

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





















