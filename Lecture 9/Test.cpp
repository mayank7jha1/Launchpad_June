#include<iostream>
#include<climits>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}



	int mini = INT_MAX;

	int minimum_element_index = -1;
	int maximum_element_index = -1;

	int maxi = INT_MIN;

	for (int i = 0; i < n; i++) {

		if (a[i] > maxi) {
			maxi = a[i];
			maximum_element_index = i;
		}

		if (a[i] < mini) {
			mini = a[i];
			minimum_element_index = i;
		}

	}
	cout << maxi << " " << mini << endl;
	cout << maximum_element_index << " " << minimum_element_index << endl;

}















