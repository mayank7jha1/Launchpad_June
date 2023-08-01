#include<iostream>
#include<vector>
#include<iterator>
using  namespace std;

int main() {
	vector<int>v(10, 5);

	//This way is quivalent to your arrays only.
	for (int i = 0; i < 10; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	//For each Loop: When you want to print the entire vector
	//For Every Element that is inside this v vector is now represented by this x
	//do this task

	for (int x : v) {
		cout << x << " ";
	}
	cout << endl;


	//Vector is Also a Container:
	//Every Container has its own iterator to iterate over itself.

	int a[] = {1, 2, 3, 4, 5};
	cout << a << endl;
	cout << a + 1 << endl;
	cout << *(a + 1) << endl;

	//begin: Address of the first block.

	//You cannot do this:
	// cout << v.begin() << endl;

	cout << *v.begin() << endl;

	// vector<int>::iterator it = v.begin();

	// v.end()

	for (vector<int>::iterator x = v.begin(); x != v.end(); x = x + 1) {
		cout << *x << " ";
	}

	cout << endl;
}

















