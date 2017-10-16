#include <iostream>
#include <stack>
 
using namespace std;

int main() {
    stack<char> brackets;
    string s;
    int j = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if(s[i] == '(') brackets.push(s[i]);
        else if(s[i] == ')' && !brackets.empty()) brackets.pop();
        else j++;
    }
    cout << s.length() - brackets.size() - j;
}
