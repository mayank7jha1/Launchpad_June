#include<iostream>
using  namespace std;
#define int long long

int n, d;
int a[100005] = {0};

void Solve() {
	//Check if my answer Exists or not!!!.

	int  BankBalance = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			//Is Din Mujhe Bank Jaana hain.
			if (BankBalance < 0) {
				//I will Deposit the min amount to make BankBalance = 0;
				BankBalance = 0;
			}
		} else {
			BankBalance += a[i];
			if (BankBalance > d) {
				cout << "-1" << endl;
				return;
			}
		}
	}

	//If I am Standing Here: Answer Exists and aapko min find karna hain.

	BankBalance = 0;
	int visits = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			if (BankBalance < 0) {
				BankBalance = d;
				visits++;
			}
		} else {
			BankBalance += a[i];
			if (BankBalance > d) {
				BankBalance = d;
			}
		}
	}

	cout << visits << endl;

}


int32_t main() {
	cin >> n >> d;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	Solve();
}