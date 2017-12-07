#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
int maxV(int a,int b)
{
	return (a>b) ? a:b;
}
int main()
{
	
	freopen("lepus.in","r",stdin);
	freopen("lepus.out","w",stdout);
	int n;
	cin>>n;
	vector <int> a(n+2,-1);
	char c;
	cin>>c;
	a[1]=0;

	for(int i=2; i<=n; i++)
	{
		cin>>c;
		if(c=='w') continue;
		if(i<3) a[i]=a[i-1];
		else if(i<5) a[i]=maxV(a[i-1],a[i-3]);
		else a[i]=maxV(maxV(a[i-1],a[i-3]),a[i-5]);

		if(c=='"' && (a[i-1]!=-1 || a[i-3]!=-1 || a[i-5]!=-1))
		 a[i]++;
	}
	cout<<a[n];	
	return 0;
}