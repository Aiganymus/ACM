#include <iostream>
#include <climits>
#include <float.h>
#include <vector>

using namespace std;

int a[1000][1000]; //adj matrix 
int used[1000];
int d[1000];
int p[1000];

int main(){
	int n, s, t;
	cin>>n>>s>>t;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin>> a[i][j];
		}
	}	

	for (int i = 0; i < n; i++){
		d[i] = INT_MAX;
		used[i] = 0;
	}

	d[s-1] = 0;
	int u, mini;

	for (int i = 0; i < n; i ++){
			mini = INT_MAX;
			u = -1;
		for (int j = 0; j < n; j++){
			if (d[j] < mini && used[j] == 0){
			mini = d[j];
			u = j;
			}
		}
		used[u] = 1;
		for (int v = 0; v < n; v++){
			if (a[u][v] > 0  && used[v] == 0 && d[u] != INT_MAX){
				if (d[u] + a[u][v] < d[v]){
					d[v] = d[u] + a[u][v];
					p[v] = u;
				}
			}
		}
	}

	vector<int> path;
	for (int v=t; v!=s; v=p[v])
		path.push_back (v);
	path.push_back (s);
	reverse(path.begin(), path.end());


	for(int i = 0; i < path.size(); i++){
		cout<<path[i]<<" ";
	}

	return 0;
}