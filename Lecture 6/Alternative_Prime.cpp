
#include<iostream>
using  namespace std;

int main() {
	int count = 0;
	int i = 3;
	int n;
	cin >> n;
	int flag = 0;

	while (i <= n) {

		flag = 0;
		int t = 2;
		while (t < i) {
			if (i % t == 0) {
				flag = 1;
			}
			t = t + 1;
		}

		if (flag == 0 and count % 2 == 1) {
			cout << i << " ";
		}
		if (flag == 0) {
			count = count + 1;
		}


		i = i + 1;
	}

	//cout << "Total No of Prime are " << count << endl;
}





















