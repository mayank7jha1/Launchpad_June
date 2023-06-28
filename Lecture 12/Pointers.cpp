#include<iostream>
using  namespace std;

int main() {
	int x = 10;
	cout << &x << endl;

	int *ptr = &x;
	cout << ptr << endl;
	cout << &ptr << endl;
	cout << *ptr << endl;

	int **xptr = &ptr;
	cout << xptr << endl;
	cout << *xptr << endl;
	cout << &xptr << endl;


	int y = 200;
	ptr = &y;

	cout << ptr << endl;


}














