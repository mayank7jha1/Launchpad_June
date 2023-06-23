#include<iostream>
using namespace std;
int main() {
	int n, count = 0, b, num = 0, temp;
	cin >> n;
	temp = n;
	int a[count];
	while (n != 0) {
		b = n % 10;
		n = n / 10;
		a[count] = b;
		count++;
	}
	for (int i = 0; i < count; i++) {
		int x = 1;
		for (int j = 1; j <= count; j++) {
			x = x * a[i];
		}
		//cout << num << " ";
		num = num + x;
	}

	//cout << num << " ";
	if (num == temp) {
		cout << "true";
	} else {
		cout << "false";
	}

}