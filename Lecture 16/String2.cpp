#include<iostream>
#include<string>
#include<cstring>
using  namespace std;

int main() {

	char ch[] = "Mayank\0";
	char ch1[] = "Samyak\0";

	string str = "Mayank";
	string str2 = "Samyak";

	int n = strlen(ch);

	for (int i = 0; ch[i] != '\0'; i++) {
		cout << ch[i] << " ";
	}
	cout << endl;
	cout << ch << endl;

	int m = str.length();

	for (int i = 0; i < m; i++) {
		cout << str[i] << " ";
	}
	cout << endl;
	cout << str << endl;

	string str3 = str + str2;
	cout << str3 << endl;

	cout << str + str2 << endl;

	int x = 10;
	int y = 20;
	cout << x + y << endl;




}