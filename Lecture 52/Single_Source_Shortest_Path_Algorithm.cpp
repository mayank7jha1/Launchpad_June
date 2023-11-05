#include<iostream>
#include<climits>
#include<list>
#include<queue>
#include<map>
using  namespace std;

template<typename T>
class Graph {
	map<T, list<T>>mp;
public:
	void addEdge(T x, T y) {
		mp[x].push_back(y);
		mp[y].push_back(x);
	}


	void bfs(T scr, T destination) {
		// map<T, bool>visited;

		// for (auto x : mp) {
		// 	visited[x.first] = 0;
		// }

		map<T, int>distance;
		for (auto x : mp) {
			distance[x.first] = INT_MAX;
		}

		queue<T>q;
		q.push(scr);
		// visited[scr] = 1;
		distance[scr] = 0;

		while (!q.empty()) {
			T node = q.front();
			// cout << node << " ";
			q.pop();

			for (auto nbrs : mp[node]) {
				if (distance[nbrs] == INT_MAX) {
					q.push(nbrs);
					distance[nbrs] = distance[node] + 1;
				}
			}
		}

		for (auto x : mp) {
			cout << x.first << " ----> " << distance[x.first] << endl;
		}

		cout << scr << " To " << destination << " distance is " << distance[destination] << endl;
	}
};



int main() {
	Graph<int>gr;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		gr.addEdge(x, y);
	}
	int scr, destination;
	cin >> scr >> destination;
	gr.bfs(scr, destination);
}





