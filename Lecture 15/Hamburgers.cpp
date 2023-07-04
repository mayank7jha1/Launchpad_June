#include<iostream>
#include<cstring>
using  namespace std;
#define int long long
char a[101];
int nb, ns, nc;
int pb, ps, pc;
int r;

int Approach1() {
	// Step1:
	//Convert the items you have in kitchen to money.

	int Cost_Of_Items_In_Kitchen =
	    (nb * pb + ns * ps + nc * pc);

	//Step2:
	//Cost of Recepe nikalo.

	//Step 2.1:
	//We want to know kitne Bread hain,Sausage hain and
	//kitne cheeze hain.
	int n = strlen(a);
	int countB = 0, countS = 0, countC = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] == 'B') {
			countB++;
		} else if (a[i] == 'S') {
			countS++;
		} else {
			countC++;
		}
	}

	int Total_Cost_Of_Receipe =
	    countB * pb + countS * ps + countC * pc;


	int Total_Money_I_Have = Cost_Of_Items_In_Kitchen + r;

	int ans = Total_Money_I_Have / Total_Cost_Of_Receipe;

	return ans;

}





int32_t main() {
	cin >> a;
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;
	cin >> r;

	cout << Approach1();
}