#include <iostream>
#include <algorithm> 
#include <queue>

using namespace std;

int main() {
    int n, f, s;
    cin >> n;
    priority_queue <int> que;

    for(int i = 0; i < n; i++) {
        cin >> f;
        cin >> s;
        if (f == 1) {
            
        }
            que.push(-s);
        else if (f == 2)
            que.pop();
        else if (f == 3){
            cout << "enter";
            cout << -que.top();
        }
    }
    
    return 0;
}