#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
using namespace std;
int main(){}
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < 0) {
                nums[i] = -(nums[i]);
            }
        }
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            ans.push_back((nums[i]*nums[i]));
        }
        return ans;
    }
};