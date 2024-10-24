#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
using namespace std;
int main(){}

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0; 
        int hi = n-1;

        while(lo<=hi){ //give condition carefully
            int mid = lo+(hi-lo)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) lo = mid+1;
            else  hi = mid-1;
        }
        return -1;
    }
};