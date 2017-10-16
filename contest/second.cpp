#include <iostream>

using namespace std;

int binarySearch(int length) {
    int left = 0;
    int right = length - 1;
    int mid, i = 0;
    while(left < right) {
        mid = (right + left)/2;
        right = mid;
        i++;
    }
    return i;
}

int main() {
    int n; 
    cin >> n;
    cout << binarySearch(n);    
}