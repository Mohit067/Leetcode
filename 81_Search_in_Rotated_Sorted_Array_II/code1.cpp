#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
#include<math.h>
using namespace std;
int main(){}

class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n = arr.size();
        int lo = 0;
        int hi = n-1;

        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(target == arr[mid]) return true;
            else if(arr[lo] == arr[mid] && arr[hi] == arr[mid]){//one change here
                lo++;
                hi--;
            }
            else if(arr[mid] <= arr[hi]){//sorted mid to hi
                if(target>=arr[mid] && target<=arr[hi]) lo = mid+1;
                else hi = mid-1;
            }
            else{//sorted lo to mid
                if(target>=arr[lo] && target<=arr[mid]) hi = mid-1;
                else lo = mid+1;
            }
        }
        return false;
    }
};