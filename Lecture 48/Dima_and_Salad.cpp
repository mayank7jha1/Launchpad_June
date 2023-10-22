#include<iostream>
using  namespace std;
#define int long long
#define shift 100001
int n, k;
int* taste;
int* calorie;

//DP: Overlapping Subproblem hain.
//DP[sum][konsa fruit par khada hu].
//DP[konsa fruit par khada hu i.e. i][sum]=Agar hum i th fruit par khade hain and
//sum is equal to the variable sum toh  hamara yaha se end tak ka answer kya hoga.
int dp[101][2 * 100001];
//O(101*1e5);

// (1-10*100)*100==Max Sum possible

int DimaSalad(int i, int sum) {

	if (i == n)	{
		if (sum == 0) {
			return 0;
		} else {
			return -1e12;
		}
	}

	//Calculate karne se pehle check
	if (dp[i][sum + shift ] != -1) {
		return dp[i][sum + shift];
	}

	int Option1 = taste[i] + DimaSalad(i + 1, sum + taste[i] - k * calorie[i]);

	int Option2 = 0 + DimaSalad(i + 1, sum);

	//return karne se pehle store
	return dp[i][sum + shift] = max(Option1, Option2); //Recursion return ki current fruit i se and sum = sum se
	//end tak answer kya hain.
}


int32_t main() {

	cin >> n >> k;

	taste = new int[n];
	calorie = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> taste[i];
	}

	for (int i = 0; i < n; i++) {
		calorie[i];
	}

	int ans = DimaSalad(0, 0);
	if (ans <= 0) {
		cout << "-1" << endl;
	} else {
		cout << ans << endl;
	}
}






