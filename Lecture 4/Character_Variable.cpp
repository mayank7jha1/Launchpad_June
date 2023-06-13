#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	char ch;
	int i = 1;
	int Upper = 0;
	int Lower = 0;
	int Special = 0;

	while (i <= n) {
		cin >> ch;

		if (ch >= 65 and ch <= 90) {
			Upper = Upper + 1;
		} else if (ch >= 97 and ch <= 122) {
			Lower = Lower + 1;
		} else {
			Special = Special + 1;
		}

		i = i + 1;
	}

	cout << Upper << " " << Lower << " " << Special << endl;


}





