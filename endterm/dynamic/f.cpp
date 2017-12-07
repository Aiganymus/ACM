#include  <iostream>
#include <fstream>
using namespace std;

int main()
{
	freopen("badsubs.in","r",stdin);
	freopen("badsubs.out","w",stdout);
	int n;
	cin>>n;
	int arr[10000];
	arr[0]=1;
	arr[1]=3;
	for(int i=2; i<46; i++) arr[i]=3*arr[i-1]-arr[i-2];
	cout<<arr[n];
	return 0;
}