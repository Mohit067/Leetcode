#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){}
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            // Skip duplicate elements for the first position
            if(i>0 && nums[i] == nums[i-1]) continue;

            for(int j=i+1; j<n; j++){
                // Skip duplicate elements for the second position
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;

                int p = j+1;
                int q = n-1;

                while(p < q){ // two pointer on third and fourth element
                    long long sum = (long long)nums[i] + (long long)nums[j] +                                   (long long)nums[p] + (long long)nums[q];
                    if (sum < target) p++;
                    else if (sum > target) q--;
                    else{
                        ans.push_back({nums[i],nums[j],nums[p],nums[q]});
                        p++;
                        q--;
                        // Skip duplicates for the third element
                        while(p<q && nums[p] == nums[p-1]) p++;
                    } 
                }
            }
        }
        return ans;
    }
};