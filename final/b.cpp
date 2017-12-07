#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while ((t--) > 0)
    {
        unsigned long long x;
        cin >> x;
        string ans = "", anss = "";
        string s = bitset<32>(x).to_string();
        for (int i = 0, j = s.length() - 1; i < 32; i++)
        {
            if (j >= 0 && s[j] == '1')
            {
                ans = ans + "0";
            }
            else
            {
                ans = ans + "1";
            }
            {
                j--;
            }
        }
        for (int i = 31; i >= 0; i--)
        {
            anss = anss + ans[i];
        }
        string bin = anss;
        long number = 0;
        int dig;
        for (int i = 0; i < bin.length(); i++)
        {
            dig = bin[i] - '0';
            number = 2 * number + dig;
        }
       cout << number;
    }
    return 0;
}