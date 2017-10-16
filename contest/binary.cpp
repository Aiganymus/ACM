#include <iostream>

using namespace std;

bool binarySearch(int arr[], int length, int number) {
    int left = 0;
    int right = length - 1;
    int mid;
    while(left < right) {
        mid = (right + left)/2;
        if (number <= arr[mid]) right = mid;
        else left = mid + 1; 
    }
    return arr[right] == number;
}

int main() {
    int n; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int number; 
    cin >> number;
    cout << binarySearch(arr, n, number);
}