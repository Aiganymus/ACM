#include <iostream>  
#include <stack>

using namespace std;

void isRight(int arr[], int n) {
    stack<int> s; 
    stack<int> temp;
    
    for (int i = 0; i < n; i++) {
        if (i == n) temp.push(arr[i]);
        else if (arr[i] >= arr[i + 1]) 
            s.push(arr[i]);
        else if (arr[i] < arr[i + 1]) {
            temp.push(arr[i]);
            while(!s.empty() && temp.top() <= s.top() && s.top() < arr[i + 1]) {
                temp.push(s.top());
                s.pop();
            }
        }
    }

    while(!s.empty()) {
        temp.push(s.top());
        s.pop();
    }        
    
    int top;
    while(!temp.empty()) {
        top = temp.top();
        temp.pop();
        if(temp.empty()) {
            cout << "yes" << endl;
            break;
        }
        if(temp.top() > top) {
            cout << "no" << endl;
            break;
        }
    }
}

int main() {
    int n, num;
    while(cin >> num) {
        if(num == 0) break;

        int arr[num];
        for (int j = 0; j < num; j++) {            
            cin >> arr[j];
        }

        isRight(arr, num);
    }

    return 0;
}

