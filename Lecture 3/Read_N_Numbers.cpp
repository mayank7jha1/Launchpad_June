#include<iostream>
using  namespace std;

int main() {
	int n; //Declaration of a variable
	cin >> n;

	int i;//Declaration
	i = 10;//Initialisation
	//i=20;//Re - Initialisation

	int sum = 0;

	while (i <= 18) {

		int t;
		cin >> t;
		sum = sum + t;

		i = i + 1;
	}

	cout << sum << endl;

}