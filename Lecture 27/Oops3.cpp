#include<iostream>
#include<cstring>
using  namespace std;

//Every class has 4 Functions that automatically invoked:
//1.Constructor
//2.Copy Constructor
//3.Copy Assignment Operator
//4.Destructor

//1. Constructor

class Car {
private:
	int price = 10000;
public:
	int  model_no = 134;
	char name[15];
	string Condition = "Nice";

	//Default Constructor
	Car() {
		cout << "Inside My Default Constructor " << endl;
	}

	//Parameterised Constructor 1
	Car(char* n, int m, int p, string c) {
		cout << "Inside My Parameterised Constructor 1 " << endl;
		strcpy(name, n);
		model_no = m;
		if (p < 5000) {
			price = 5000;
		} else {
			price = p;
		}
		Condition = c;
	}

	//Parameterised Constructor 2
	Car(char* n, int p) {
		cout << "Inside My Parameterised Constructor 2 " << endl;
		strcpy(name, n);
		if (p < 5000) {
			price = 5000;
		} else {
			price = p;
		}
	}

	void Setter(int x) {
		if (x < 5000) {
			price = 5000;
		} else {
			price = x;
		}
	}

	int Getter() {
		return price;
	}

	void Print() {
		cout << "Name of the Car is " << name << endl;
		cout << "Model No. of the Car is " << model_no << endl;
		cout << "The Price of the Car is " << price << endl;
		cout << "Condition of the Car is " << Condition << endl;
		cout << endl;
	}
};


int main() {
	Car x;//object of class.

	Car y("BMW", 1201, 21000, "Very Good");

	Car z("TMW", 1789);
	y.Print();
	z.Print();

}










