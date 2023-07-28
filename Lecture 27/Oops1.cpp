#include<iostream>
#include<cstring>
using  namespace std;

class Car {
private:
	int price = 110;
public:
	int  model_no;
	char name[15];
	string Condition;

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

	// x.price = 2;
	x.model_no = 1002;

	// x.name[0] = 'B';
	// x.name[1] = 'M';
	// x.name[2] = 'W';

	strcpy(x.name, "BMW");
	x.Condition = "Very Good";

	x.Print();

	Car y;
	// y.price = 110;
	y.model_no = 1202;
	strcpy(y.name, "Defender");
	y.Condition = "Good";

	y.Print();


}










