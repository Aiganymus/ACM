#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n][n];
    int total = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            a[i-1][j-1] = i * j;
            if (a[i-1][j-1] == x) {
                total++;
            }
        }
    }

    cout << total;
}