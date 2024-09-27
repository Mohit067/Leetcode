#include<iostream>
#include<vector>
using namespace std;
int mian(){}
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows= matrix.size();
        int cols = matrix[0].size();

        int i = 0;
        int j = cols-1;

        while(i<rows && j>=0){
            if(matrix[i][j] == target) return true;
            else if(matrix[i][j] > target){// go left
                j--;
            }
            else{ // go down  (matrix[i][j] < target)
                i++;
            }
        }
        return false;
    }
};