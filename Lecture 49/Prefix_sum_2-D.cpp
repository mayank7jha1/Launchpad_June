#include<iostream>
using  namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}

	//Prefix Sum:

	for (int i = 0; i < n; i++) {
		for (int j = 1; j < m; j++) {
			a[i][j] = a[i][j - 1] + a[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 1; j < m; j++) {
			a[j][i] = a[j - 1][i] + a[j][i];
		}
	}

	cout << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}


}





