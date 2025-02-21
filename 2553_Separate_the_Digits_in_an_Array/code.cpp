#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){}

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            vector<int> temp; // Temporary vector to store digits
            while(nums[i] > 0) {
                int bit = nums[i] % 10;
                temp.push_back(bit);
                nums[i] /= 10;
            }
            reverse(temp.begin(), temp.end()); // Reverse to maintain the original order
            ans.insert(ans.end(), temp.begin(), temp.end()); // Append to ans
        }
        return ans;
    }
};
