#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){}

class Solution {
    public:
        void output(vector<vector<int>>& ans, vector<int> subset, vector<int>& nums, int index) {
            if (index == nums.size()) {
                ans.push_back(subset);
                return;
            }
            
            // Exclude current element
            output(ans, subset, nums, index + 1);
            
            // Include current element
            subset.push_back(nums[index]);
            output(ans, subset, nums, index + 1);
        }
    
        vector<vector<int>> subsets(vector<int>& nums) {
            vector<vector<int>> ans;
            vector<int> subset;
            output(ans, subset, nums, 0);
            return ans;
        }
    };
    