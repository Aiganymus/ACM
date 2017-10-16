#include <iostream>  
#include <queue>

using namespace std;

int check(queue<int> que, int cur, int next) {
    if (que.size() == 1) return 0;

    int n; 
    long long f = 0;
    queue<int> second;

    n = que.front();
    que.pop();

    if (n == 1) return f + check(que, cur + 1, cur + 2);

    while(!que.empty()) {
        if (n > que.front()) {
            f += next - cur + 1;
            return f + check(que, cur + 1, cur + 2);
        }
        
        next++;
        second.push(que.front());
        que.pop();
    }
    return f + check(second, cur + 1, cur + 2);
}

int main() {
    int n, k, num;
    cin >> n >> k;
    queue<int> que;
    for (int i = 0; i < n; i++) {
        cin >> num;
        que.push(num);
    }

    cout << check(que, 1, 2) % 1000000007;
}