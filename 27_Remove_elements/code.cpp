#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
using namespace std;
int main(){}
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != val) ans.push_back(nums[i]);//check if ith element of nums vector is not equal to val then push into ans vector
        }
        for(int i=0; i<ans.size(); i++){
            nums[i] = ans[i];// because we fill our nums vector again 
        }
        return ans.size();
    }
};