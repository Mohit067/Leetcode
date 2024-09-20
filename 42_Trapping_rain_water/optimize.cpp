class Solution {
public:
    int trap(vector<int>& height) {
        //use only one array
        int n = height.size();
        int prev[n];

        //finding previous greater element
        int max = height[0];
        prev[0] = -1;
        for(int i=1; i<n; i++){
            prev[i] = max;
            if(height[i] > max) max = height[i];
        }

        //finding next greater elemnt --> modification in prev arr
        max = height[n-1];
        for(int i=n-2; i>=0; i--){
            if(prev[i] > max) prev[i] = max;
            if(height[i] > max) max = height[i];
        }

        //finding absolute value in mini and height
        int water = 0;
        for(int i=1; i<n-1; i++){
            if(prev[i] > height[i]){
                water +=  (prev[i] - height[i]);
            }
        }

        return water;
    }
};