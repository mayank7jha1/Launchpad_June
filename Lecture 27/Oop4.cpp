#include<iostream>
#include<cstring>
using  namespace std;

//Every class has 4 Functions that automatically invoked:
//1.Constructor
//2.Copy Constructor
//3.Copy Assignment Operator
//4.Destructor

//1. Copy Constructor

class Car {
private:
	int price = 10000;
public:
	int  model_no = 134;
	char name[15];
	string Condition = "Nice";
	char* Color;

	//Default Constructor
	Car() {
		cout << "Inside My Default Constructor " << endl;
	}

	//Parameterised Constructor 1
	Car(char* n, int m, int p, string c, char* ch) {
		cout << "Inside My Parameterised Constructor 1 " << endl;
		strcpy(name, n);
		model_no = m;
		if (p < 5000) {
			price = 5000;
		} else {
			price = p;
		}
		Condition = c;
		Color = new char[100];
		strcpy(Color, ch);
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

	Car(Car &y) {
		cout << "Inside My Copy Constructor" << endl;
		price = y.price;
		model_no = y.model_no;
		strcpy(name, y.name);
		Condition = y.Condition;
		//Deep Copy
		Color = new char[100];
		strcpy(Color, y.Color);
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
		cout << "The Color of the Car is " << Color << endl;
		cout << endl;
	}
};


int main() {
	Car x;//object of class.
	Car y("BMW", 1201, 21000, "Very Good", "Black");
	Car z("TMW", 1789);

	Car m(y);
	y.name[0] = 'T';
	y.Color[0] = 'S';
	y.Print();
	m.Print();

}










