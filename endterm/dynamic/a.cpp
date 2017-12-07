#include <iostream>
#include <stdio.h>
using namespace std;
int main() {

	freopen("ladder.in", "r", stdin); 
	freopen("ladder.out", "w", stdout);
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	int sum = a[n-1];
	for(int i = n-2; i >= 0; i--){
		if(a[i] < 0 && i != 0){
			sum += a[i - 1];
		}else
		if(a[i] > 0){
			sum += a[i];
		}
	}

	cout<<sum;



	return 0;
}