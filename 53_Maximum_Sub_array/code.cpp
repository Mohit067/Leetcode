#include<iostream>
#include<vector>
using namespace std;
int main(){}

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int sum = nums[0];
        for(int i=1; i<nums.size(); i++){
            sum = max(nums[i], sum+nums[i]);
            cout<<sum<<" ";
            ans = max(sum, ans);
        }
        return ans;
    }
};