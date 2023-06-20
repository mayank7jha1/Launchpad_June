#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i <= n - 2; i++) {
		//Main n-1 times koi kaam
		//kar raha hu.


		//i=0:-->5
		//i=1:-->4
		//i=2:-->3
		//i=3:-->2
		//i=4:-->1

		for (int j = 0; j <= n - i - 2; j++) {
			if (a[j] > a[j + 1]) {
				//a[0]>a[1]
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;

			}
		}

	}



}









