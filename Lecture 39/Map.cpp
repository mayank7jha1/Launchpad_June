#include<iostream>
#include<map>
#include<unordered_map>
using  namespace std;

int main() {
	int n;
	cin >> n;

	map<string, int>mp;
	unordered_map<string, int>ump;


	for (int i = 0; i < n; i++) {
		string s; int x;
		cin >> s >> x;
		// mp.insert(make_pair(s, x));
		mp.insert({s, x});
		ump.insert({s, x});
	}

	//cout << mp["Vikrant"] << endl;
	// cout << mp["vikrant"] << endl;
	//cout << endl << endl << endl;
	mp["Shruti"] = 11100;

	for (pair<string, int> x : mp) {
		cout << x.first << " ---> " << x.second << endl;
	}

	cout << endl << endl << endl;

	// for (pair<string, int> x : ump) {
	// 	cout << x.first << " ---> " << x.second << endl;
	// }



	for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
		// cout << it->first << " " << it->second << endl;
	}

	cout << endl << endl << endl;

	for (pair<string, int> x : ump) {
		cout << x.first << " ---> " << x.second << endl;
	}

	cout << endl << endl << endl;

	for (unordered_map<string, int>::iterator it = ump.begin(); it != ump.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
		// cout << it->first << " " << it->second << endl;
	}
	cout << endl << endl << endl;


	//Find and Count:

	//Find Function return an iterator pointing to the
	//block whose key you were searching for.

	//Count: This Functions returns true/false for key
	//that is present or not.

	if (mp.find("vikrant") != mp.end()) {
		cout << "YES" << endl;
	} else {
		cout << "No" << endl;
	}


	if (mp.count("vikrant") == 1) {
		cout << "YES" << endl;
	} else {
		cout << "No" << endl;
	}


	if (ump.find("vikrant") != ump.end()) {
		cout << "YES" << endl;
	} else {
		cout << "No" << endl;
	}


	if (ump.count("vikrant") == 1) {
		cout << "YES" << endl;
	} else {
		cout << "No" << endl;
	}

}

























