#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    char number[9];
    cin >> number;
    int length = strlen(number), c = 0, d = 0;

    for (int i = 1; i <= length - 1; i++)
        c += pow(2, i);

    int comb = pow(2, length);
  
    int j = 0;
    while (j < length)
    {
        if(number[j] - '0' == 7) 
        {           
            d += comb/2;
        }
        comb /= 2;
        cout << comb << " ";
        j++;
    }
    cout << c + d + 1;
    return 0;
}