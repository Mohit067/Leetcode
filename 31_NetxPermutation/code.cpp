class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;
        // finding pivot idx
        for(int i=n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                idx = i;
                break;
            }
        }
        if(idx == -1){
            reverse(nums.begin(),nums.end());
            return;
        }

        //reverse elemenet after idx
        reverse(nums.begin()+idx+1, nums.end());

        //finding just greater element to idx
        int j = -1;
        for(int i=idx+1; i<n; i++){
            if(nums[idx] < nums[i]){
                j = i;
                break;
            }
        }
        
        //swaping idx and j
        int temp = nums[idx];
        nums[idx] = nums[j];
        nums[j] = temp;
        return;
    }
};