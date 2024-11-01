#include<iostream>
#include<vector>
using namespace std;
int main(){}

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        if(n==0) return 0;
        int lo = 0;
        int hi = n-1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) lo = mid+1;
            else hi = mid-1;
        }
        return lo;
    }
};