#include <iostream>
#include <algorithm> 
#include <stack>

using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> brackets;
    int length = 0;
    int number = 0;

    for(int i  = 0; i < s.length; i++) {
        if (s[i] == '(') 
            brackets.push(s[i]);
        else {
            if (stack.empty()) 
                length = 0;
            else if (brackets.top() == '(') {
                brackets.pop();
                length += 2;
            }
        }
    }
}