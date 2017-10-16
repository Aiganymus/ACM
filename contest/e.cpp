#include <iostream>
#include <stack>
 
using namespace std;

void print(stack<char> &s)
{
    if(s.empty())
    {
        return;
    }
    
    char x = s.top();
    s.pop();
    print(s);
    s.push(x);
    if (x != '0') cout << x;
}

int main() {
    stack<char> brackets;
    string s;
    cin >> s;
    brackets.push('0');
    for (int i = 0; i < s.length(); i++) {
        if(s[i] != brackets.top()) brackets.push(s[i]);
        else {
            brackets.pop();
        }
    }
    print(brackets);
}
