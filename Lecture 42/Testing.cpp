#include<iostream>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<queue>

using namespace std;
const int N = 0;


/*
	map:
		1. This has Key-Value Pair.
		2. Keys here are Sorted.
		3. It is made from Red Black Trees which has similar properties
		   to self balancing Binary Search Tree.
		4. Searching,Insertion and Deletion inside a Map gives
		   you Time Complexity of O(log n).
		5. Keys are Unique.

	Unordered_Map:
		1. This has Key-Value Pair.
		2. Keys here are not Sorted and are in random order..
		3. It is made from the principle of Hashing.
		4. Searching,Insertion and Deletion inside a unordered_map gives
		   you Time Complexity of O(constant) or O(1) time in average case
		   scenario but in worst case it can also lead upto O(n).
		5. Keys are Unique.

	set:
		1. This has Keys Only.
		2. Keys here are Sorted.
		3. It is made from Red Black Trees which has similar properties
		   to self balancing Binary Search Tree.
		4. Searching,Insertion and Deletion inside a Map gives
		   you Time Complexity of O(log n).
		5. Keys are Unique.

	Unordered_set:
		1. This has Keys Only.
		2. Keys here are not Sorted and are in random order..
		3. It is made from the principle of Hashing.
		4. Searching,Insertion and Deletion inside a unordered_map gives
		   you Time Complexity of O(constant) or O(1) time in average case
		   scenario but in worst case it can also lead upto O(n).
		5. Keys are Unique.

*/

int main() {

	map<string, int>mp;
	unordered_map<string, int>ump;

	set<string>s;
	unordered_set<string>us;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string str; int t;
		cin >> str >> t;

		mp.insert({str, t});
		ump.insert(make_pair(str, t));
		s.insert(str);
		us.insert(str);
	}

	cout << endl << "From Here Ordered_Map Starts: " << endl;
	for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
	}
	cout << endl << endl;
	for (pair<string, int> x : mp) {
		cout << x.first << " " << x.second << endl;
	}

	cout << endl << "From Here Unordered_Map Starts: " << endl;

	for (unordered_map<string, int>::iterator it = ump.begin(); it != ump.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
	}
	cout << endl << endl;
	for (pair<string, int> x : ump) {
		cout << x.first << " " << x.second << endl;
	}


	cout << endl << "From Here Ordered_Set Starts: " << endl;
	for (string x : s) {
		cout << x << endl;
	}

	cout << endl << "From Here Ordered_Set Starts: " << endl;

	for (string x : us) {
		cout << x << endl;
	}

}