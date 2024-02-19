#include<iostream>
#include<vector>
using namespace std;

vector<int> maxSumSubarray(vector<int> &arr) {
    int n = arr.size();
    int curSum = 0;
    int maxSum = 0;
    for(int i=0;i<n;i++)
    {
        curSum += arr[i];
        if(curSum > maxSum)
        {
            maxSum = curSum;
        }
        if(curSum < 0)
        {
            curSum = 0;
        }

    }
    vector<int> result;
    result.push_back(maxSum);
    return result;
}

int main() {
    int n;
    cout << "enter the size of an array ";
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cout << "enter the elements of an array ";
        cin >> arr[i];
    }
    vector<int> ans = maxSumSubarray(arr);
    cout << ans[0];
    return 0;
}