#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
using namespace std;
int main(){}
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=0; i<n-2; i++){
           int lo = i+1;
           int hi = n-1;
           if (i > 0 && nums[i] == nums[i - 1]) continue;//for handling duplicate triplates
           while(lo<hi){
            int curr = nums[i]+nums[lo]+nums[hi];
                if(curr == 0)  {
                    result.push_back({nums[i], nums[lo], nums[hi]});
                    
                    // Skip duplicate elements for the second and third numbers
                    while (lo < hi && nums[lo] == nums[lo + 1]) lo++;
                    while (lo < hi && nums[hi] == nums[hi - 1]) hi--;
                    lo++;
                    hi--;
                }
                else if(curr > 0){
                    hi--;
                }
                else{
                    lo++;
                }
           }
        }
        return result;
    }
};
