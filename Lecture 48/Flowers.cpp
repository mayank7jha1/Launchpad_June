#include<iostream>
#include<bits/stdc++.h>
using  namespace std;
int  k;
int pre[100005];
#define int long long
int dp[100005];
#define mod 1000000007
int a, b;


//This Flower function returns ki current flower ko khane ka way kya hain.
//Dp[i]= Total ways to eat i flowers.
//pre[i]= Total ways to eat from 1 to i flowers.

int Flowers(int len) {
	if (len == 0) {
		return 1;
	}

	if (dp[len] != -1) {
		return dp[len];
	}

	//Last Flower is Red.
	int Option1 = Flowers(len - 1);


	//Last Flower is White.
	int Option2 = 0;
	if (len >= k) {
		Option2 = Flowers(len - k);
	}

	return dp[len] = Option2 + Option1;

}


//Pre[i]= matlab hain 1 se lekar ith flower tak khane ka way.
void Precompute() {
	memset(dp, -1, sizeof(dp));
	pre[0] = 0;

	for (int i = 1; i < 100005; i++) {
		pre[i] = pre[i - 1] + Flowers(i);
		pre[i] %= mod;
	}
}

int32_t main() {
	int t;
	cin >> t >> k;


	//Precompute: I am Calculating har flower ko khane ka way upto 10^5 and storing it.

	Precompute(); //O(N)

	while (t--) {
		cin >> a >> b;
		cout << pre[b] - pre[a - 1] << endl;
	}
}











