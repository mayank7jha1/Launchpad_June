#include<iostream>
using namespace std;
int n;
/*
1. Grid Represents the input Grid where you will take
   values.
2. Total_Ones is the variable that represents the total number of
   Boxes where the knight can Travel in any number of paths.
3. ans is a variable that represents the maximum number of boxes
   where the knight traveled in a single path.
4. Count variable Represents the number of boxes the knight can
   travel in the current path,please don't confuse it with ans.
*/
int grid[10][10], Total_Ones = 0, ans = -1, N = 10;

int dx[] = {1, 1, 2, 2, -1, -1, -2, -2};
int dy[] = {2, -2, 1, -1, 2, -2, 1, -1};

void Input_Grid() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> grid[i][j];
			if (grid[i][j] == 1) {
				Total_Ones++;
			}
		}
	}
}

void Knight(int x, int y, int count) {

	ans = max(ans, count);

	for (int i = 0; i < 8; i++) {
		int new_x = x + dx[i];
		int new_y = y + dy[i];

		if (new_x >= 0 and new_x <= N and new_y >= 0 and new_y <= N
		        and grid[new_x][new_y] == 1) {

			grid[new_x][new_y] = 0;

			Knight(new_x, new_y, count + 1);

			grid[new_x][new_y] = 1;//Backtracking
		}
	}
}


int main() {
	cin >> n;
	Input_Grid();

	grid[0][0] = 0;

	Knight(0, 0, 1);

	cout << Total_Ones - ans << endl;
}