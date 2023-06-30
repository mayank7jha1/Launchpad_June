#include<iostream>
#include<algorithm>
using  namespace std;
int k;

void Rotate(int *a, int n) {

	reverse(a + 0, a + n);
	reverse(a, a + k);
	reverse(a + k, a + n);

}

int main() {
	int n;
	cin >> n;

	int  a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> k;
	Rotate(a, n);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}