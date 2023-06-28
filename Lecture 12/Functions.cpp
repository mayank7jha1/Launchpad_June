#include<iostream>
using  namespace std;

int AddNumber(int, int);//Function Prototype;

int main() {
	int x, y;
	cin >> x >> y;

	cout << x + y << endl;

	double t, z;
	cin >> t >> z;
	cout << t + z << endl;

	int sum = AddNumber(10, 15); //Function Call

	return 0;
}



//Function Definition:
int AddNumber(int a, int b) {
	int sum = a + b;

	return sum;
}
