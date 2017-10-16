#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    queue<int> first, second, third;
    int number;
    int fsize, ssize, tsize;
    for (int i = 0; i < a; i++) {
        cin >> number;
        first.push(number);
        fsize += number;
    }
    for (int i = 0; i < b; i++) {
        cin >> number;
        second.push(number);
        ssize += number;
    }
    for (int i = 0; i < c; i++) {
        cin >> number;
        third.push(number);
        tsize += number;
    }

    int _max = max(fsize, max(ssize, tsize));
    
    while(fsize != ssize || ssize != tsize || fsize != tsize) {
        if(fsize == _max) {
            fsize -= first.front();
            first.pop();
            _max = max(fsize, max(ssize, tsize));
        } 
        else if(ssize == _max) {
            ssize -= second.front();
            second.pop();
            _max = max(fsize, max(ssize, tsize));
        } else {
            tsize -= third.front();
            third.pop();
            _max = max(fsize, max(ssize, tsize));
        }
    }

    cout << fsize;

    return 0;
}