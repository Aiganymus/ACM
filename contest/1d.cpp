#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int n;
    cin >> n;
    int a[n][2];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2; ++j)
            cin >> a[i][j];
    }

    int total = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = a[i][0]; j < a[i][1]; ++j) {
            if (str[j - 1] == str[j]) {
                total++;
            }
        }
        cout << total << endl;
        total = 0;
    }
}