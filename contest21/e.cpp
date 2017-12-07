#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main() { 
    int n, m, count = 0; 
    cin >> n;
    string ss;
    cin >> ss;
    cin >> m;
    string s[m];
    for(int i = 0; i < m; i++) 
        cin >> s[i];
    
    set<char> c;
    for(int i = 0; i < n; i++) {
        if(ss[i] == '*') {
            for(int j = 0; j < m; j++) {
                c.insert(s[j][i]);
                count++;
            }
        }
    }

    set<char> :: iterator itr;
    for (itr = c.begin(); itr != c.end(); ++itr) {
        for(int i = 0; i < n; i++) {
            if(ss[i] == *itr) 
                c.erase(*itr);
        }
    }

    (count > c.size()) ? cout << c.size() : cout << 0;
    return 0;
}