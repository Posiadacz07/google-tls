// DONE - work on performance

#include <bits/stdc++.h>

using namespace std;

double checkArrayOrder(vector<int> arr) {
    vector<int> X;
    if(arr.size() < 2) {
        return 0;
    }
    for(int i=0; i< arr.size(); i++)
        X.push_back(arr[i]);

    sort(X.begin(), X.end());

	if(X == arr)
        return 1;

    for(int i = 0; i < X.size() / 2; i++)
    {
        int temp = X[i];
        X[i] = X[X.size() - i - 1];
        X[X.size() - i - 1] = temp;
    }

    if(X == arr)
        return -1;

    return 0;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << checkArrayOrder(arr);
    
    return 0;
}
