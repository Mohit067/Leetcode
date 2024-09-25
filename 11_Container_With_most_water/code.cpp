#include<iostream>
#include<vector>
using namespace std;
int mian(){
}
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0; 
        int j = n-1;
        int maxWater = 0;
        while(i<=j){
            //logic is here
            int heights = min(height[i] , height[j]);
            int width = (j - i);
            int water = heights * width;
            maxWater = max(water , maxWater);
            if(height[i] <= height[j]) i++;
            else j--;
        }
        return maxWater;
    }
};