class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int prev[n];

        //finding previous greater element
        int max = height[0];
        prev[0] = -1;
        for(int i=1; i<n; i++){
            prev[i] = max;
            if(height[i] > max) max = height[i];
        }

        //finding next greater elemnt
        int next[n];
        max = height[n-1];
        next[n-1] = -1;
        for(int i=n-2; i>=0; i--){
            next[i] = max;
            if(height[i] > max) max = height[i];
        }

        //finding minimum element in both of prev and next
        int mini[n];
        for(int i=1; i<n-1; i++){
            mini[i] = min(prev[i],next[i]);
        }

        //finding absolute value in mini and height
        int water = 0;
        for(int i=1; i<n-1; i++){
            if(mini[i] > height[i]){
                water +=  (mini[i] - height[i]);
            }
        }
        
        return water;
    }
};