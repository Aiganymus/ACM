#include <iostream>

using namespace std;

void sort(int arr[], int start, int end) {
    if(start >= end) return;
    int mid = (start + end)/2;
    sort(arr, start, mid);
    sort(arr, mid + 1, end);

    int left = start;
    int right = mid + 1;
    int n = end - start + 1;
    int b[n];
    for (int i = 0; i < n; i++) {
        if (left > mid) {
            b[i] = arr[right];
            right++;
        }
        else if (right > end) {
            b[i] = arr[left];
            left++;
        }
        else if (arr[left] <= arr[right]) {
            b[i] = arr[left];
            left++;
        }
        else {
            b[i] = arr[right];
            right++;
        }
    }
    for (int i = 0; i < n; i++) arr[i + start] = b[i];
}
  
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, 0, n - 1);
    int first = 0, second = 0;
    for (int i = 0; i < n/2; i++) first += arr[i];
    for (int i = n/2; i < n; i++) second += arr[i];
    cout << second - first;
    return 0;
}