#include<iostream>
#include<vector>
using namespace std;
int mian(){}

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //using two pointer
        int n = nums.size();
        int i = 0;
        int j = 0;
        while(i<n && j<n){
            if(nums[i]==0 && nums[j]!=0){
                if(j>i){
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
                else j++;
            }
            else if(nums[i] != 0) i++;
            else if(nums[j] == 0) j++;
        }
    }
};