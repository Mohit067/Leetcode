#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
#include<math.h>
using namespace std;
int main(){}

class Solution {
public:
    bool check(int mid, vector<int>& arr, int days){
        int n = arr.size();
        int m = mid;
        int count = 1;

        for(int i=0; i<n; i++){
            if(m >= arr[i]){
                m -= arr[i]; 
            }
            else{
                count++;
                m = mid;
                m -= arr[i];
            }
        }
        if(count > days) return false;
        else return true;
    }
    int shipWithinDays(vector<int>& arr, int days) {
        int n = arr.size();
        int max = INT_MIN;
        int sum = 0 ;
        for(int i=0; i<n; i++){
            if(max < arr[i]) max = arr[i];
            sum += arr[i];
        }
        int lo = max;
        int hi = sum;
        int minCapacity = sum;

        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(check(mid, arr, days) == true){
                minCapacity = mid;
                hi = mid-1;
            }
            else lo = mid+1;
        }
        return minCapacity;
    }
};