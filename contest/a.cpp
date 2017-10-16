#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s = "", ss;
    stack<string> st;
    int i = 0;
    while(getline(cin, s)) {
        cout << i;
        if (i > n) break;
        if (s == "pwd") {
            cout << 'j' << endl;
        }
        else {
            cout << "enter" << endl;
            for (int i = 0; i < s.length(); i++) {
                cout << "dlsj";
                if(s[i] != '/') {
                    s += s[i];
                    
                }
            }
            cout << s;
        }
        i++;
    }
    // char str[] = "/stplit/me";
    // char *pch;
    // pch = strtok(str, "/");
    // while(pch != NULL) {
    //     cout << pch << endl;
    //     pch = strtok(NULL, "/");
    // }
}