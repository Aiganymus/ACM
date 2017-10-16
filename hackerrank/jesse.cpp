#include <iostream>
#include <algorithm> 
#include <queue>

using namespace std;

int main() {
    int n, k, d;
    cin >> n >> k;
    priority_queue <int> que;

    for(int i = 0; i < n; i++) {
        cin >> d;
        que.push(-d);
    }
        
    
    int op = 0, f;
    while(-que.top() < k && !que.empty()) {
        f = que.top();
        que.pop();
        
        if(que.empty()) break;
        
        f = f + que.top() * 2;
        que.pop();
        que.push(f);
        op++;
    }

    if(que.empty()) cout << "-1";
    else cout << op;
    
    return 0;
}