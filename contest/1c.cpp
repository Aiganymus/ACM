#include <iostream>

using namespace std;

bool prime(int x) {
    int total = 0;
    for (int i = 1; i <= x; ++i) {
        if (x % i == 0) {
            total++;
            if (total > 3) {
                return false;
            }
        }
    }
    if (total != 3) {
        return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        if (prime(a[i])) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
