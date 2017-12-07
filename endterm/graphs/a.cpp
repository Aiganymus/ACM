#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    freopen("floyd.in", "r", stdin);
    freopen("floyd.out", "w", stdout);
    int n; 
    cin >> n;
    int arr[n+1][n+1];
    for(int i = 1; i <= n; i++) 
        for(int j = 1; j <= n; j++) 
            cin >> arr[i][j];
    for (int k=1; k<=n; ++k)
    	for (int i=1; i<=n; ++i)
    		for (int j=1; j<=n; ++j)
    			arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) 
            cout << arr[i][j] << " ";
        cout << endl;
    }
}   