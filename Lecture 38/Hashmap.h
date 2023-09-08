#include<iostream>
using  namespace std;


//Node: Contains Three Things: Key and value (Pair): This is the data
//User wants to store.
//Third Thing is : Adress of the next block.

class node {
public:
	int value;
	string key;//Assumption is ki key is a string.
	node* next;//Self Referencing Pointer

	node(string s, int d) {
		key = s;
		value = d;
		next = NULL;
	}
};

class hashtable() {

}


int main() {

}


// Key      value
//Mayank--->100