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
        sort(arr.begin(),arr.end());
        int hMax = 0;
        
        for(int i=0; i<n; i++){
            int h = min(arr[i] , n-i);//(n-i) calculates how many elements remain   after the ith element.
            hMax = max(hMax, h);
        }
        return hMax;
    }
};