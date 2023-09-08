#include<iostream>
#include"Hashmap.h"
using  namespace std;

int main() {
	int n;
	cin >> n;
	hashmap<string>h;

	for (int i = 0; i < n; i++) {
		string s; int t;
		cin >> s >> t;
		h.insert(s, t);
	}
	h.print();
}