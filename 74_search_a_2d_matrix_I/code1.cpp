#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
#include<math.h>
using namespace std;
int main(){}

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        //binary search 2d represent in oneD like --> 1 3 5 7 10 11 16 20 23 30 34 60
        int n = arr.size();//total number of rows
        int m = arr[0].size();//total number of cols
        int lo = 0;
        int hi = m*n - 1;

        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            int row = mid / m;
            int col = mid % m;

            if(arr[row][col] == target) return true;
            else if(arr[row][col] > target) hi = mid-1;
            else lo = mid+1;

        }

        return false;
    }
};