#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
using namespace std;
int main(){}

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        //this is bruet force method which is not exceptable
        // vector<int> v;
        // for(int i=0; i<n; i++){
        //     int prod = 1;
        //     for(int j=0; j<n; j++){
        //         if(i == j) continue;
        //         else{
        //             prod *= nums[j];
        //         }
        //     }
        //     v.push_back(prod);
        // }
        // return v;



        //optimize solution
        vector<int> prefix(n , 1);
        for(int i=1; i<n; i++){
            prefix[i] = nums[i-1] * prefix[i-1];
        }

        vector<int> suffix(n , 1);
        for(int i=n-2; i>=0; i--){
            suffix[i] = suffix[i+1] * nums[i+1];
        }

        vector<int>ans(n);
        for(int i=0; i<prefix.size(); i++){
            ans[i] = prefix[i]*suffix[i];
        }
        return ans;
    }
};