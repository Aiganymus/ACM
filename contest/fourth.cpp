#include <iostream>
#include <stdio.h>

using namespace std;

void binarySearch(int arr[], int length, int number) {
    int left = 0;
    int right = length - 1;
    int mid, first = 0;

    while (left < right) {
        mid = (left + right)/2; 

        if (number == arr[mid]) {
            first = mid;
            right = mid;
        }

        if (number < arr[mid]) right = mid - 1;
        else left = mid + 1;
    }
    if(first != 0) cout << first + 1;
    arr[right] == number ? cout << right + 1 << " " : cout << 0;
}

int main() {
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
        binarySearch(arr, n, b[i]);
        cout << endl;
    }
}