#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    int n, oc = 0, szc = 0, szf = 0;
    cin >> n;
    string f, s, contacts[n], find[n];

    for (int i = 0; i < n; i++) {
        cin >> f;
        cin >> s;
        if (f == "add") {
            contacts[szc] = s;
            szc++;
        }
        else {
            find[szf] = s;
            szf++;
        }
    }

    for(int i = 0; i < szf; i++) {
        for(int j = 0; j < szc; j++) 
            if(contacts[j].rfind(find[i], 0) == 0) oc++;            
        cout << oc << endl;
        oc = 0;
    }
    return 0;
}