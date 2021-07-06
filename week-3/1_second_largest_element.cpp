// DONE

#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int secondLargest(const vector<int>& arr) {
    int i, first, second;
 
    if (arr.size() < 2) {
        return -1;
    }
 
    int largest = second = INT_MIN;
 
    for (int i = 0; i < arr.size(); i++) {
        largest = max(largest, arr[i]);
    }
 
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != largest)
            second = max(second, arr[i]);
    }
    if (second == INT_MIN)
        return -1;
    else
        return second;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = secondLargest(arr);
    cout << result;
    return 0;
}
