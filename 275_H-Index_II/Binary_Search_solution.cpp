#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
using namespace std;
int main(){}


class Solution {
public:
    int hIndex(vector<int>& arr) {
        int n = arr.size();
        int hMax = 0;
        
        int lo = 0;
        int hi = n-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(arr[mid] >= n-mid){ //check the h-index contion
                hi = mid-1; //move to better candidate
            }
            else{
                lo = mid+1; //too small go to right
            }
        }
        return n-lo;
    }
};
