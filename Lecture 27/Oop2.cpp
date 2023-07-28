#include<iostream>
#include<cstring>
using  namespace std;

class Car {
private:
	int price = 10000;
public:
	int  model_no;
	char name[15];
	string Condition;

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

	x.Setter(7821);
	x.model_no = 1002;

	// x.name[0] = 'B';
	// x.name[1] = 'M';
	// x.name[2] = 'W';

	strcpy(x.name, "BMW");
	x.Condition = "Very Good";

	//x.Print();

	Car y;
	y.Setter(2314);
	y.model_no = 1202;
	strcpy(y.name, "Defender");
	y.Condition = "Good";

	//y.Print();

	cout << x.Getter() << endl;
	cout << y.Getter() << endl;


}










