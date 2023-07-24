#include<iostream>
using  namespace std;
int n, m;
char maze[1001][1001];
bool visited[1001][1001];
bool Solution[1001][1001];

bool RatInMaze(int i, int j) {

	if (i == n and j == m) {
		Solution[i][j] = 1;
		for (int x = 0; x <= n; x++) {
			for (int y = 0; y <= m; y++) {
				cout << Solution[x][y] << " ";
			}
			cout << endl;
		}
		return true;
	}

	if (visited[i][j] == 1) {
		return false;
	}

	visited[i][j] = 1;
	Solution[i][j] = 1;

	if (j + 1 <= m and visited[i][j + 1] == 0) {
		bool rightans = RatInMaze(i, j + 1);
		if (rightans == 1) {
			return true;
		}
	}

	if (i + 1 <= n and visited[i + 1][j] == 0) {
		bool downans = RatInMaze(i + 1, j);
		if (downans == 1) {
			return true;
		}
	}

	Solution[i][j] = 0;
	return false;
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> maze[i][j];
			if (maze[i][j] == 'X') {
				visited[i][j] = 1;
			}
		}
	}
	n--, m--;
	int ans = RatInMaze(0, 0);

	if (ans == 0) {
		cout << "-1" << endl;
	}
}














