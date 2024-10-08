#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
using namespace std;
int main(){}

class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int maxSum = -1;

        for(int i=1; i<m-1; i++){
            for(int j=1; j<n-1; j++){
                //logic is here 
                int sum = grid[i][j]+grid[i-1][j]+grid[i-1][j-1]+grid[i-1][j+1]+
                grid[i+1][j]+ grid[i+1][j-1]+grid[i+1][j+1];
                maxSum = max(sum , maxSum);
            }
        }
        return maxSum;
    }
};


/**
        # # #
          #
        # # #
 */