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
    stack<char> t;
    stack<char> u;
    string s;
    int j = 0;
    cin >> s;
    u.push(s[0]);
    for (int i = 1; i < s.length(); i++) {
        t.push(s[i]);
    }
    for (int i = 1; i < s.length(); i++) {
        u.push(t.top());
        t.pop();
    }
    print(u);
}
