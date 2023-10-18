#include<iostream>
#include<cstring>
#include<vector>
using  namespace std;

int main() {
	char str1[] = "My name is Mayank";
	//Reverse this sentence:

	//Mayank is name My

	char* token = strtok(str1, " "); //This returns a character

	cout << token << endl;



	while (token != NULL) {
		token = strtok(NULL, " ");
		cout << token << endl;
	}

	string mp = "My name is Rahul";

	char* token1 = strtok((char*)mp.c_str(), " ");
	vector<string>dp;
	dp.push_back(token1);


}