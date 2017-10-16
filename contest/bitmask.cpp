#include <iostream>
#include <algorithm> 

using namespace std;

int a[11001];
int n, m = 99999, s1, s2;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int j = 0; j < (1 << n); j++)
    {
        for (int i = 0; i < n; i++)
            if ((j & (1 << i)))
                s1 += a[i];
            else
                s2 += a[i];
        cout << s1 << " "<< s2 << endl;
        m = min(m, abs(s1 - s2)), s1 = 0, s2 = 0;
    }

    cout << m;
}