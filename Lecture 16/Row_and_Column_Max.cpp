#include<iostream>
using  namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int a[n][m];

	for (int i = 0; i < n; i++) {
		//This loop represents har row par
		//jao.
		for (int j = 0; j < m; j++) {
			//This Loop represents har column
			//par jao of row i.
			cin >> a[i][j];
		}
	}


	int Row_Sum[n] = {0};

	int Column_Sum[m] = {0};

	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < m; j++) {
			sum += a[i][j];
		}
		Row_Sum[i] = sum;
	}

	for (int i = 0; i < n; i++) {
		cout << Row_Sum[i] << " ";
	}

	for (int i = 0; i < m; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			sum += a[j][i];
		}
		Column_Sum[i] = sum;
	}
	cout << endl;
	for (int i = 0; i < m; i++) {
		cout << Column_Sum[i] << " ";
	}


}












