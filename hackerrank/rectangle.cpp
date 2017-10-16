#include<iostream>
#include<stack>

using namespace std;
 
int findMaxArea(int arr[], int n)
{
    stack<int> s;
 
    int max_area = 0, top, area, i = 0;

    while (i < n) {
        if (s.empty() || arr[s.top()] <= arr[i])
            s.push(i++);
        else {
            top = s.top();  
            s.pop();  
            
            area = arr[top] * (s.empty() ? i : i - s.top() - 1);
            
            if (max_area < area)
                max_area = area;
        }
    }
 
    while (!s.empty())
    {
        top = s.top();
        s.pop();
        area = arr[top] * (s.empty() ? i : i - s.top() - 1);
 
        if (max_area < area)
            max_area = area;
    }
 
    return max_area;
}
 
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << findMaxArea(arr, n);
    return 0;
}