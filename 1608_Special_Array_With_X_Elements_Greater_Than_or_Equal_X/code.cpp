#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
using namespace std;
int main(){}

class Solution {
public:
    int specialArray(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        
        if(arr[0] >= n) return n;
        
        for(int i=1; i<n; i++){
            int len = n-i;
            // if(arr[i] == arr[i-1]) continue;
            if(arr[i] >= len &&  len > arr[i-1]) return len;
        }

        return -1;
    }
};