#include <iostream>
#include <stack>

using namespace std;

bool checkBrackets(string s) {
    stack<char> brackets;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{') 
            brackets.push(s[i]);

        else if(!brackets.empty()) {
            if((s[i] == ')' && brackets.top() == '(') || 
                (s[i] == ']' && brackets.top() == '[') || 
                (s[i] == '}' && brackets.top() == '{')) 
                brackets.pop();
            else return false;
        }
        else return false;            
    }
    return brackets.empty();
}

int main() {
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    
    for (int j = 0; j < n; j++) 
        cout << ((checkBrackets(s[j])) ?  "YES" : "NO") << endl;
    

    return 0;
}