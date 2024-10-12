#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
using namespace std;
int main(){}

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //using without extra space
        int n = nums.size();
        vector<int> ans(n ,1);

        // for prefix product
        for(int i=1; i<n; i++){
            ans[i] = ans[i-1]*nums[i-1];
        }

        // for suffix product
        int suffix = 1;
        for(int i=n-2;i>=0; i--){
            suffix *= nums[i+1];
            ans[i] *= suffix;
        }

        return ans;
    }
};