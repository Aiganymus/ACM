#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    string s;
    vector <string> str;
    vector <string> :: iterator itr;

    while(getline(cin, s)) {
        if (s[0] == '+') {
            str.push_back(s);
        }
        else if (s[0] == '-') {
            for (itr = str.begin(); itr != str.end(); ++itr) {
                if (*itr == s.substr(1, s.length()) {

                }
            }
        }
    }

    for(i : str) {
        cout << i;
    }
    return 0;
}