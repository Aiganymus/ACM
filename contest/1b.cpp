#include <iostream>
#include <set>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int j;
    set <int> a;
    for (int i = 0; i < s.length(); ++i) {
        j = s[i];
        if (j >= 97 && j <= 122) {
            a.insert(s[i]);
        }
    }

    cout << a.size();
}