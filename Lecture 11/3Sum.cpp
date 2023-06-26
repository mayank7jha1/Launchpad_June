#include<iostream>
using  namespace std;




int main() {
	int t;
	cin >> t;

	int i = 1;

	while (i <= t) {

		int n;
		cin >> n;

		int a[n];

		for (int i = 0; i < n; i = i + 1) {
			cin >> a[i];
		}

		//Step 2: Digits ka Array:
		int digit[n];

		for (int i = 0; i < n; i = i + 1) {
			digit[i] = a[i] % 10;
		}

		//Step 3: Building Your Frequency Array of Digits.

		int freq[10] = {0};

		for (int i = 0; i < n; i = i + 1) {
			int value = digit[i];
			freq[value] = freq[value] + 1;
		}

		//Step 4:
		//Remove The Extra Frequency of every Digit
		//If any digit has a frequency greater than 3 make it 3 else
		//Leave it as it is.


		for (int i = 0; i < 10; i = i + 1) {
			if (freq[i] > 3) {
				freq[i] = 3;
			}
		}

		//STEP 5: Build the answer array for Triplets logic
		int ans[30] = {0};
		int k = 0;

		for (int i = 0; i < 10; i = i + 1) {

			int x = freq[i];
			for (int j = 0; j < x; j = j + 1) {
				ans[k] = i;
				k = k + 1;
			}
		}
		int size = k;
		cout << size << endl;
		int flag = 0;
		for (int i = 0; i < size - 2; i = i + 1) {

			for (int j = i + 1; j < size - 1; j = j + 1) {

				for (int k = j + 1; k < size; k = k + 1) {

					if ((ans[i] + ans[j] + ans[k]) % 10 == 3) {
						flag = 1;
					}
				}
			}
		}

		if (flag == 0) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}

		i = i + 1;
	}
}
