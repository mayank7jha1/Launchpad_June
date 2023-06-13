#include<iostream>
using  namespace std;

int main() {

	char ch;

	int Upper = 0;
	int Lower = 0;
	int Special = 0;

	while (cin >> ch) {

		if (ch >= 65 and ch <= 90) {
			Upper = Upper + 1;
		} else if (ch >= 97 and ch <= 122) {
			Lower = Lower + 1;
		} else {
			Special = Special + 1;
		}
	}

	cout << Upper << " " << Lower << " " << Special << endl;


}





