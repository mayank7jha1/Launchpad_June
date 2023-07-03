#include<iostream>
using  namespace std;

int main() {
	// char a[100];
	// cin >> a;
	// cout << a << endl;

	//cout << sizeof(a) / sizeof(char) << endl;
	//cout << endl;
	char ch[] = {'M', 'a', 'y', 'a', 'n', 'k', '\0'};
	cout << (void*)ch << endl;

	char ch1[] = {"Samyak\0"};

	for (int i = 0; i < 6; i++) {
		cout << ch1[i] << " ";
	}
	cout << ch1 << endl;

	int a[] = {1, 2, 3, 4, 5};
	cout << a << endl;
}

















