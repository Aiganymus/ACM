#include <iostream>
#include <fstream>
using namespace std;


	int main() {
		
	//freopen("king2.in","r",stdin);
	//freopen("king2.out","w",stdout);
	int n;
	cin>>n;
	int length=0;
	int answers[100][100];
	int last[100][100];
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{

		  	cin>>answers[i][j];   			
		}
	}
	/*last[1][1]=answers[1][1];
	length=answers[1][1];
	for(int i=2; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			last[i+1][j]=max(answers[i+1][j]+last[i][j],answers[i+1][j+1]+last[i][j]);		
		}
	}
		for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{

		  	cout<<last[i][j]<<" ";   			
		}
		cout<<endl;
	}*/
	last[1][1]=answers[1][1];

	int f,s;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
		
			last[i+1][j]=max(answers[i+1][j]+last[i][j],answers[i+1][j+1]+last[i][j]);
			last[i+1][j+1]=max(answers[i+1][j+1]+last[i][j],answers[i+1][j+1]+last[i][j]);	
			
		}
	}
	int maxnumber=0;
	for(int i=1; i<=50; i++)
	{
			for(int j=1; j<=50; j++)
			{
				if(last[i][j]>maxnumber) maxnumber=last[i][j];
				
			}   

	}

	cout<<maxnumber;
    return 0;
}