#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main(){

freopen("success.in","r",stdin);
freopen("success.out","w",stdout);

int n;
cin>>n;
int a[n];

for(int i=0;i<n;i++)
{                 
	cin>>a[i];
}

next_permutation(a,a+n);

for(int i=0;i<n;i++)
{
	cout<<a[i]<<" ";	
}

return 0;
}           