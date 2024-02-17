#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void kth(vector<int> &arr, int n, int k)
{
    sort(arr.begin(), arr.end());
    cout << "kth largest element " << arr[n - k] << endl;
    cout << "kth smallest element " << arr[k - 1];
}

int main()
{
    int n, k;
    cout << "enter the size of an array ";
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cout << "enter the elements of an array ";
        cin >> arr[i];
    }
    cout << "enter the kth largest and smallest ";
    cin >> k;
    kth(arr, n, k);
    return 0;
}