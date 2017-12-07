#include <bits/stdc++.h>
using namespace std;
int arr[3000][3000];
int n;
int dist[30000];
bool used[30000];
const int INF=10000000;
int s,f;
int main()
{	
	freopen("dijkstra.in", "r", stdin);
	freopen("dijkstra.out", "w", stdout);
    for(int i = 1; i <= n; i++) 
        for(int j = 1; j <= n; j++) 
            cin >> arr[i][j];
            
	for(int i = 1; i <= n; i++) 
        dist[i] = INF;
        
	dist[s] = 0;
	int min = INF;
	int v;
	for(int i = 1; i <= n; i++) {
		min = INF;
		for(int j = 1; j <= n; j++) {
			if(used[j]==false && dist[j]<min) {
				min = dist[j];
				v = j;
			}
		}
		used[v] = true;
		for(int k = 1; k <= n; k++)	
			if(arr[v][k]>-1)
			    dist[k] = min(dist[k],dist[v]+arr[v][k]); 
	}
	if(dist[f] != INF)
		cout << dist[f];
	else cout << "-1";
    return 0;
}