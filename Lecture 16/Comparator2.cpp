#include<iostream>
#include<algorithm>
using  namespace std;

bool compare(int x, int y) {
	if (x > y) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int a[] = {2, 1, 0, 3, 4, 5};


	sort(a, a + 6, compare);

	for (int i = 0; i < 6; i++) {
		cout << a[i] << " ";
	}
}