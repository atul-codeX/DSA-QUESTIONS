#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        
        int jump=0;
        int pos=0;
        int des=0;

        for(int i=0;i<nums.size()-1;i++)
        {
            des = max(des, nums[i] + i); // use std::max instead of Math.max

            if(pos == i)
            {
                pos = des;
                jump++;
            }
        }
        return jump;
    }
};

int main() {
    int n;
    cout << "enter the size of an array ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "enter the elements of an array ";
        cin >> arr[i];
    }
    Solution sol;
    cout << "the minimum number of jumps is " << sol.jump(arr);

    return 0;
}