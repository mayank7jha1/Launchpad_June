#include<iostream>
using  namespace std;

int main() {
	string str = "mayaaaank";

	// // M -> 109 -> 1;
	// // a -> 97  -> 2;
	// // y -> 121 -> 3;
	// // n -> 110 -> 4;
	// // k -> 107 -> 5;

	// int map[256] = {0};

	// for (int i = 0; i < str.length(); i++) {
	// 	//i=0 ---> str[0]-->'m' i.e ---> 109 --> map[109]= 1;
	// 	//i=1 ---> str[1]-->'a' i.e ---> 97 --> map[97]= 2;
	// 	map[str[i]] = i + 1;
	// }


	// for (int i = 0; i < 256; i++) {
	// 	if (map[i] != 0) {
	// 		cout << (char)i << "  " << map[i] << endl;
	// 	}
	// }

	// cout << endl << endl;

	//Lower Case Characters aayenge:


	// int map2[26] = {0};

	// for (int i = 0; i < str.length(); i++) {
	// 	//i=0 ---> str[0]-->'m' i.e ---> 109-97 --> map[12]= 1;
	// 	//i=1 ---> str[1]-->'a' i.e ---> 97-97  -->   map[0]= 2;
	// 	map2[str[i] - 'a'] = i + 1;
	// }

	// for (int i = 0; i < 26; i++) {
	// 	if (map2[i] != 0) {
	// 		cout << (char)(i + 'a') << "  " << map2[i] << endl;
	// 	}
	// }

	// cout << endl << endl;

	int freq1[256] = {0};

	for (int i = 0; i < str.length(); i++) {
		//i=0 ---> str[0]-->'m' i.e ---> 109 --> map[109]= 1;
		//i=1 ---> str[1]-->'a' i.e ---> 97 --> map[97]= 1;
		freq1[str[i]]++;
	}

	for (int i = 0; i < 256; i++) {
		if (freq1[i] != 0) {
			cout << (char)i << "  " << freq1[i] << endl;
		}
	}

	cout << endl << endl;

	int freq2[26] = {0};

	for (int i = 0; i < str.length(); i++) {
		//i=0 ---> str[0]-->'m' i.e ---> 109-97 --> map[12]= 1;
		//i=1 ---> str[1]-->'a' i.e ---> 97-97  -->   map[0]= 1;
		freq2[str[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		if (freq2[i] != 0) {
			cout << (char)(i + 'a') << "  " << freq2[i] << endl;
		}
	}


}