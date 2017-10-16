#include <iostream>
#include <stdio.h>

using namespace std;

string binarySearch(int arr[], int length, int number) {
    int left = 0; 
    int right = length - 1;
    int mid;
    while (left < right) {
        mid = (right + left)/2;
        if (number <= arr[mid]) right = mid;
        else left = mid + 1;
    }
    return arr[right] == number ? "YES" : "NO";
}
 
int main () {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n], b[k];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < k; i++) {
        cin >> b[i];
    }
    for(int i = 0; i < k; i++) {
        cout << binarySearch(arr, n, b[i]) << endl;
    }
}