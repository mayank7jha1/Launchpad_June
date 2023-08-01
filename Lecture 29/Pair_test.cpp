#include<iostream>
#include"Pair.h"

using  namespace std;

int main() {

	Pair<int>p;
	p.first = 10;
	p.second = 20;

	Pair<int>p1;
	p1.first = 30;
	p1.second = 50;


	cout << p.first << " " << p.second << endl;
	cout << p1.first << " " << p1.second << endl;

}