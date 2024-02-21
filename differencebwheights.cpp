#include<iostream>
#include<vector>
#include<algorithm> // include the algorithm library
using namespace std;

int getMinDiff(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end()); // sort the vector
    int n = arr.size();
    int ans = arr[n - 1] - arr[0];
    int smallest = arr[0] + k;
    int largest = arr[n - 1] - k;
    int mi, ma;

    for (int i = 0; i < n; i++) {
        mi = min(smallest, arr[i + 1] - k);
        ma = max(largest, arr[i] + k);
        if (mi < 0) {
            continue;
        }
        ans = min(ans, ma - mi);
    }
    return ans;
}

int main() {
    int n, k;
    cout << "enter the size of an array ";
    cin >> n;
    cout << "enter the by which factor you want to increament or decrement the  value ";
    cin >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "enter the elements of an array ";
        cin >> arr[i];
    }
    cout << "the differece is " << to_string(getMinDiff(arr, k)); // convert int to string before printing

    return 0;
}