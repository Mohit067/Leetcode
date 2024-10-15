#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
using namespace std;
int main(){}

class Solution {
public:
    int arrangeCoins(int n) {
        long long lo = 1;
        long long hi = n;

        while(lo<=hi){
            long long k = lo+(hi-lo)/2;// k is mid
            long long m = (k*(k+1))/2;//1+2+3+.....k
            //m = total number of staircase

            if(m==n) return (int)k;
            else if(m>n) hi = k-1;
            else lo = k+1;
        }
        return (int)hi;
    }
};