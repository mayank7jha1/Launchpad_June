#include<iostream>
#include<algorithm>
using  namespace std;



int main() {

	int a[] = {1, 12, 13, 14, 15, 5, 6, 7};

	sort(a, a + 8);
	reverse(a, a + 8);

	for (int i = 0; i < 8; i++) {
		cout << a[i] << " ";
	}

	//10^5 -- 10^
}