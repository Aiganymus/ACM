#include <iostream>  

using namespace std;

int reverse_number(int n) {
    if (n < 10) return n;
 
    int reversedNumber = 0, remainder;
    while(n != 0)
    {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }
    return reversedNumber;
}

int main() {
    int n, a, b, c = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        a = reverse_number(a);
        b = reverse_number(b);
        c = a + b;
        arr[i] = reverse_number(c);
    }
    for(int i = 0; i < n; i++) 
        cout << arr[i] << endl;
    return 0;
}