#include<iostream>
#include<string>
using  namespace std;

int main() {

	char ch[4][6];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> ch[i][j];
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 6; j++) {
			cout << ch[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl << endl;

	int a[4][6];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> a[i][j];
		}
	}


	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 6; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << a[0][2] << endl;
	cout << ch[0][2] << endl;

	cout << ch[1] << endl;

	string str[4];

	for (int i = 0; i < 4; i++) {
		cin >> str[i];
	}

	cout << str[1] << " ";
	cout << str[3][4] << " ";

}



















