#include<bits/stdc++.h>
using namespace std;
const int N = 0;

//Dp Kya Represent karega ??
//What is my dp going to store ??
//I can store the answer using a single array, mera stage/state is dependent on a single
//entity.

// Store Dp[n]=Fib(n);
//Dp[n]=Dp[n-1]+Dp[n-2];

//Dp[n]==Represnts: nth Fibonacci number ko rerpresent karta hain.

int dp[100005] = {0};
//Space Complexity: O(state)==O(1e5)==O(n);
//Time Complexity: O(state)*O(transition time)==O(n)*O(1):::O(n);

int Fib(int n) {

	if (n <= 1) {
		return n;
	}
	//How would i Know that i have calculated the answer for the current state or not??
	//Calculate karne se pelhe check.
	if (dp[n] != -1) {
		return dp[n];
	}

	//Return karne se pehle store.
	return dp[n] = Fib(n - 2) + Fib(n - 1);
}


//Iterative Dp: Dp ka array vo represent kya karta hain.
//Dp Ke state kitne hain?

// Dp[5] = 5th Fibonacci Number;
// Dp[4] = 4th Fibonacci Number;
//Space Complexity: O(n);
//Time Complexity: O(n);

int dp2[100005] = {0};
int Fib2(int n) {

	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	return dp[n];
}


int main() {
	int n;
	cin >> n;

	//I am Initialising my Dp array with a value jo kabhi answer nahi bann sakti.
	// for (int i = 0; i < 100005; i++) {
	// 	dp[i] = -1;
	// }

	//memset: is there to intialise with 0/-1 only.
	memset(dp, -1, sizeof(dp));

	cout << Fib(n) << endl;
	cout << Fib2(n) << endl;
}


/*
	Steps for Top Down:
	1. Solve the Problem using Recursion.
	2. Check if we can apply Dp or Not. How?
	   By checking if there are any overlapping subproblems or not.
	3. Now you know you can apply DP and hence you want to store the answer
	   of every stage. You can store the answer in any way possible.
	   What are you going (Same as what recursion) to store determines the definition of DP.
	4. After Storing always check if you are current at a stage whose answer
	   is calculated or not. If you have the answer directly return it else calculate.
*/