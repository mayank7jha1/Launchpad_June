#include<iostream>
#include<algorithm>
using  namespace std;

int main() {



	int a[] = {1, 2, 2, 2, 3, 3, 3, 3, 3, 5, 7};

	cout << a << endl;
	cout << a + 1 << endl;
	cout << a + 2 << endl;
	cout << a + 3 << endl;
	cout << a + 3 - a << endl;

	// bool x = binary_search(a, a + 11, 3);
	// cout << x << endl;

	// cout << binary_search(a, a + 11, 3) << endl;

	cout << (lower_bound(a, a + 11, 3)) - a << endl;
	cout << upper_bound(a, a + 11, 3) - a << endl;

	int* ptr = lower_bound(a, a + 11, 3);
	int* ptr2 = a;
	cout << ptr - ptr2 << endl;


	int tt = lower_bound(a, a + 11, 3) - a;
	cout << tt << endl;

}



















