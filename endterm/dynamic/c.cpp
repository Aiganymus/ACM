#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	freopen("knight.in","r",stdin);
	freopen("knight.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++){
			arr[i][j]=0;
		}
			
	}

	arr[0][0]=1; 
	for(int i=1; i<n; i++)
	{
		for(int j=1; j<m; j++)
		{
		    if(i==1 && j==1) continue;

			if(i==1) arr[i][j]=arr[i-1][j-2];
				
			
			else if(j==1) arr[i][j]=arr[i-2][j-1];
			

			else if(i>=2 && j>=2)arr[i][j]=arr[i-1][j-2] + arr[i-2][j-1];
		}
	}
	cout<<arr[n-1][m-1];

	
	return 0;
}