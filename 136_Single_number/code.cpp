#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int mian(){}
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            bool flag = false; // no duplicate
            for(int j = 0; j<n; j++){
                if(i==j) continue;
                if(nums[i] == nums[j]){
                    flag =true;
                    break;
                }
            }
            if(flag == false) return nums[i];
        }
        return 5;
    }
};