#include <iostream>     
#include <algorithm>    
#include <vector>

using namespace std;

int main() {
    vector<int> items;
    int n;
    cin >> n;
    int f, s;
    for (int i = 0; i < n; i++) {
        cin >> f;
        if (f == 1) {
            cin >> s;
            items.push_back(s);
        }
        else if (f == 2) {
            cin >> s;
            items.erase(remove(items.begin(), items.end(), s), items.end());
        }
        else if(f == 3) {
            sort(items.begin(), items.end());
            cout << items.front() << endl;            
        }
    }

    return 0;
}