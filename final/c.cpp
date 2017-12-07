#include <iostream> 
using namespace std;

int arr[100][100];
bool used[100][100];

int lands(int x, int y) {
    used[x][y] = true;
    if(!used[x-1][y] && arr[x-1][y] == 1) lands(x-1, y);
    if(!used[x+1][y] && arr[x+1][y] == 1) lands(x+1, y);
    if(!used[x][y-1] && arr[x][y-1] == 1) lands(x, y-1);
    if(!used[x][y+1] && arr[x][y+1] == 1) lands(x, y+1);  
}

int main() {
    int n;
    cin >> n;
    int result[n];
    for(int k = 0; k < n; k++) {
        int w, h;
        cin >> w >> h;
        int x, y;
        char c;
        for(int i = 0; i < h; i++) 
            for(int j = 0; j < w; j++) {
                cin >> c;
                if(c == '#') 
                    arr[i][j] = 0;
                else if(c == '.') 
                    arr[i][j] = 1;
                else if(c == '@') {
                    arr[i][j] = 1;
                    x = i; y = j;
                }
            }
        lands(x, y);
        int total = 0;
        for(int i = 0; i < h; i++) 
            for(int j = 0; j < w; j++) 
                if(used[i][j]) total++;
        result[k] = total;

        for(int i = 0; i < h; i++) 
            for(int j = 0; j < w; j++) {
                arr[i][j] = 0;
                used[i][j] = false;
            }
    }
    for(int k = 0; k < n; k++) 
        cout << result[k] << endl;    
    return 0;
}