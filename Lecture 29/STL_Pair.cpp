#include<iostream>
#include<utility>
using  namespace std;

int main() {

	pair<int, int>p;

	p.first = 100;
	p.second = 200;

	cout << p.first << " " << p.second << endl;

	pair<int, int>p1 = p;

	cout << p1.first << " " << p1.second << endl;

	pair<int, int>p2 = {200, 300};

	cout << p2.first << " " << p2.second << endl;

	pair<int, int>p3;

	//You cannot do this
	// make_pair(400,500);

	p3 = make_pair(300, 900);

}