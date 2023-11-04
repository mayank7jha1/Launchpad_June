#include<iostream>
using  namespace std;

int main() {
	int vertices, edges;
	cin >> vertices >> edges;

	int Input_Graph[vertices + 1][vertices + 1] = {{0}};

	for (int i = 0; i < edges; i++) {
		int x, y;
		cin >> x >> y;
		Input_Graph[x][y] = 1;

		//When Graph is Undirected.
		Input_Graph[y][x] = 1;
	}


	for (int i = 1; i < vertices + 1; i++) {
		for (int j = 1; j < vertices + 1; j++) {
			cout << Input_Graph[i][j] << " ";
		}
		cout << endl;
	}

	//Check if there is a edge between 1 and 5.
	//O(1);
	cout << Input_Graph[1][5] << endl;
}