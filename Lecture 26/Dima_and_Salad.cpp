#include<bits/stdc++.h>
using namespace std;
#define int long long

int n, k;
int taste[101] = {0}, Calorie[101] = {0};

int DimaAndSalad(int i, int Sum) {

	if (i == n) {
		if (Sum == 0) {
			return 0;
		} else {
			return -1e12;
		}
	}


	int Option1 = taste[i] + DimaAndSalad(i + 1, Sum + taste[i] - k * Calorie[i]);
	int Option2 = 0 + DimaAndSalad(i + 1, Sum);

	return max(Option1, Option2);
}

int32_t main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> taste[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> Calorie[i];
	}

	int ans = DimaAndSalad(0, 0);

	if (ans <= 0) {
		cout << "-1" << endl;
	} else {
		cout << ans << endl;
	}
}