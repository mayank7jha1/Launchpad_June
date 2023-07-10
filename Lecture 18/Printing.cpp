#include<iostream>
using  namespace std;

void Printing(int x, int n) {

	if (x > n) {
		//Stop
		return;
	}

	//Task:
	cout << x << " ";


	//Recursion Statement
	//Aage Kaise Badhna Hain.(Next Stage)
	Printing(x + 1, n);

	return;
}

void Printing_Recursively(int n) {

	if (n < 1) {
		return;
	}


	Printing_Recursively(n - 1);

	cout << n << " ";
}

void Printing_RecursivelyD(int n) {

	if (n < 1) {
		return;
	}
	cout << n << " ";

	Printing_RecursivelyD(n - 1);

}


void DPrinting(int x, int n) {
	if (x > n) {
		//Stop
		return;
	}


	//Aage Kaise Badhna Hain.
	DPrinting(x + 1, n);


	//Task:
	cout << x << " ";


	return;
}


void Printing_IterativeA(int x, int n) {

	for (int i = x; i <= n; i++) {
		cout << i << " ";
	}
	cout << endl;
}


void Printing_IterativeD(int x, int n) {

	for (int i = x; i <= n; i++) {
		cout << n - i + 1 << " ";
	}
	cout << endl;
}

void Printing_IterativeAA(int n) {

	for (int i = n; i >= 1; i--) {
		cout << n - i + 1 << " ";
	}
	cout << endl;
}

void Printing_IterativeDD(int n) {

	for (int i = n; i >= 1; i--) {
		cout << i << " ";
	}
	cout << endl;
}


int main() {
	int n;
	cin >> n;

	Printing(1, n);
	cout << endl;
	Printing_IterativeA(1, n);

	cout << endl << endl;;

	DPrinting(1, n);
	cout << endl;
	Printing_IterativeD(1, n);
	cout << endl;
	Printing_IterativeAA(n);
	Printing_IterativeDD(n);

	cout << endl << endl;

	Printing_Recursively(n);
	cout << endl;
	Printing_RecursivelyD(n);

}























