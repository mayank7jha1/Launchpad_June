#include<iostream>
using  namespace std;

int main() {
	char ch;
	int Capital = 0;
	int Small = 0;
	int Special = 0;

	while (cin.get(ch)) {
		//1. ch=='M'

		if (ch >= 65 and ch <= 90) {
			Capital = Capital + 1;
		} else if (ch >= 97 and ch <= 122) {
			Small = Small + 1;
		} else {
			Special = Special + 1;
		}
	}

	cout << Capital << " " << Small << " " << Special << endl;
}