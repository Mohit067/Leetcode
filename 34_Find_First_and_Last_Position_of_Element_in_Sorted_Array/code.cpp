#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
using namespace std;
int main(){}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        if(n==1 && nums[0] == target){
            ans.push_back(0);
            ans.push_back(0);
            return ans;
        }
        int lo = 0;
        int hi = n-1;
        bool flag = false;

        //this is for first occurance
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid] == target){
                if(mid == 0 || nums[mid-1] != target){
                    flag = true;
                    ans.push_back(mid);
                    break;
                }
                else{
                    hi = mid-1;
                }
            }
            else if(nums[mid] > target) hi = mid-1;
            else lo = mid+1;
        }
        if(flag == false) ans.push_back(-1);


        // this is for last occurance
        lo = 0;
        hi = n-1;
        flag = false;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid] == target){
                if(mid == n-1 || nums[mid+1] != target){
                    flag = true;
                    ans.push_back(mid);
                    break;
                }
                else{
                    lo = mid+1;
                }
            }
            else if(nums[mid] > target) hi = mid-1;
            else lo = mid+1;
        }
        if(flag == false) ans.push_back(-1);

        return ans;
    }
};