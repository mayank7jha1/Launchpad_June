#include<iostream>
#include<cstring>
#include<algorithm>
using  namespace std;

int main() {
	char a[] = {"Mayank"};

	//a->b;
	int n = strlen(a);

	// for (int i = 0; i < n; i++) {
	// 	if (a[i] == 'a') {
	// 		a[i] = 'b';
	// 	}
	// }

	//cout << a << endl;

	//Compare two Character arrays.

	char ch[] = {"Samyak"};

	//LexoGraphically.

	//a<ch.

	sort(a, a + n);//ASCII Value ke according sort hota hain.

	cout << a << endl;

	reverse(a + 0, a + n);
	cout << a << endl;


}












