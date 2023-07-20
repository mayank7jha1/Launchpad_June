#include<iostream>
using  namespace std;

int main() {
	srand(time(0));
	int n = 500 + rand() % 200;
	cout << n << endl;
	for (int i = 0; i < n; i++) {
		cout << 1 + rand() % 10 << " ";
	}
}