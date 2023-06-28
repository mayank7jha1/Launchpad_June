#include<iostream>
using  namespace std;


//Function Definition:
int AddNumber(int a, int b) {
	int sum = a + b;

	return sum;
}

//Return Type: int,float,double,char etc;
// void

void AddNumber2(int a, int b) {
	cout << a + b << endl;
}

int main() {

	int sum = AddNumber(10, 15); //Function Call
	cout << sum << endl;
	AddNumber2(20, 30);

	return 0;
}



