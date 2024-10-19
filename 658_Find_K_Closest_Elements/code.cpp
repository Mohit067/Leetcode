#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
#include<math.h>
using namespace std;
int main(){}

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int> ans(k);
        if(x < arr[0]){//case 1 (x == -1)
            for(int i=0; i<k; i++){
                ans[i] = arr[i];
            }
            return ans;
        }
        if(x > arr[n-1]){//case 2 (x > n-1)
            int i = n-1;
            int j = k-1;
            while(j>=0){
                ans[j] = arr[i];
                i--;
                j--;
            }
            return ans;
        }
        //to find x apply binary search
        int lo = 0;
        int hi = n-1;
        bool flag = false;// element x is not present
        int t = 0; // represent index of ans vecttor
        int mid = -1;
        while(lo<=hi){
            mid = lo + (hi-lo)/2;
            if(arr[mid] == x) {
                flag = true;
                ans[t] = arr[mid];
                t++;
                break;
            }
            else if(arr[mid] > x) hi = mid-1;
            else lo = mid+1;
        }
        int lb = hi;// lowerBound
        int ub = lo;// upperBound
        if(flag == true){
            lb = mid-1;
            ub = mid+1;
        }
        while(t<k && lb>=0 && ub<=n-1){
            int d1 = abs(x-arr[lb]);
            int d2 = abs(x-arr[ub]);
            if(d1>d2){
                ans[t] = arr[ub];
                ub++;
            }
            else{
                ans[t] = arr[lb];
                lb--;
            }
            t++;
        }
        if(lb<0){
            while(t<k){
               ans[t] = arr[ub];
               ub++;
               t++; 
            }
        }
        if(ub>0){
            while(t<k){
               ans[t] = arr[lb];
               lb--;
               t++; 
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};