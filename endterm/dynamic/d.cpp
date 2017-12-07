#include <iostream>
#include <fstream>
using namespace std;


	int main() {
		
	freopen("king2.in","r",stdin);
	freopen("king2.out","w",stdout);
	int arr[10][10];
	int ans[10][10];

	for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            cin >> arr[i][j];
            ans[i][j] = 36000;
        }
    }
    ans[8][1] = 0;
    for (int i = 8; i >=1; i--) {
        for (int j = 1; j <=8; j++) {
            ans[i - 1][j] = min(ans[i - 1][j], arr[i - 1][j] + ans[i][j]);
            ans[i - 1][j + 1] = min(ans[i - 1][j + 1], arr[i - 1][j + 1] + ans[i][j]);
           	ans[i][j + 1] = min(ans[i][j + 1], arr[i][j + 1] + ans[i][j]);
        }
    }
    cout << ans[1][8];

    return 0;
    }