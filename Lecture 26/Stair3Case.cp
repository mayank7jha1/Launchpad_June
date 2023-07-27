#include<iostream>
#include<climits>
using namespace std;
const int N = 0;
int Min_Steps = INT_MAX;

void StairCase(int* a, int n, int i, int Steps, bool *visited) {

	if (i == n) {
		Min_Steps = min(Steps, Min_Steps);
		return;
	}

	visited[i] = 1;

	if (i + 1 <= n and visited[i + 1] == 0) {
		StairCase(a, n, i + 1, Steps + 1, visited);
	}

	if (i + a[i] <= n and i + a[i] >= 0 and visited[i + a[i]] == 0) {
		StairCase(a, n, i + a[i], Steps + 1, visited);
	}

	visited[i] = 0;
	return;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		bool visited[n + 1] = {0};
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		Min_Steps = INT_MAX;
		StairCase(a, n, 0, 0, visited);

		if (Min_Steps == INT_MAX) {
			cout << "-1" << endl;
		} else {
			cout << Min_Steps << endl;
		}
	}
}