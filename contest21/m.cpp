#include <iostream>
#include <utility>
#include <stdlib.h> 

using namespace std;

int main() { 
    pair <int, int> p1;
    pair <int, int> p2;
    cin >> p1.first >> p1.second;   
    cin >> p2.first >> p2.second;
    int x = (p1.first == p2.first) ? 2 : abs(p1.first - p2.first) + 1;
    int y = (p1.second == p2.second) ? 2 : abs(p1.second - p2.second) + 1;
    cout << 2 * (x + y);
    return 0;
}