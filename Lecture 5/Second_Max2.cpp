#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int i = 1;
	int t;
	int Max = -101;
	int Second_Max = -102;

	while (i <= n) {
		cin >> t;

		if (t > Max) {
			Second_Max = Max;
			Max = t;
		} else if (t<Max and t>Second_Max) {
			Second_Max = t;
		}
		i = i + 1;
	}

	cout << Max << " " << Second_Max << endl;
}










