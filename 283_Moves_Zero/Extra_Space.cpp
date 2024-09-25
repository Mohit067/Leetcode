#include<iostream>
#include<vector>
using namespace std;
int mian(){
}
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // using with extra space
        int n = nums.size();
        vector<int>v;
        int count = 0;
        for(int i=0; i<n; i++){
            if(nums[i] != 0) v.push_back(nums[i]);
            else count++;
        }
        for(int i=1; i<=count; i++){
            v.push_back(0);
        }

        for(int i=0; i<n; i++){
            nums[i] = v[i];
        }
    }
};