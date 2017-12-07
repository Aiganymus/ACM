#include <iostream>
#include <set>

using namespace std;

int main() {    
    set<string> res;
    int n; 
    cin >> n;
    string names[n];
    for(int i = 0; i < n; i++) 
        cin >> names[i];
    
    string s;
    for(int i = 0; i < n; i++) {
        for(int j = names[i].length()- 1; j >= 0; j--) {
            if(names[i][j] == 'u')
                s += "oo";
            else if(!(names[i][j] == 'k' && s[s.length() - 1] == 'h'))
                s += names[i][j];
        }
        res.insert(s);
        s = "";
    }

    cout << res.size();

    return 0;
}