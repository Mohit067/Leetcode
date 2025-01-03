#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){}

class Solution {
public:
    int countGoodNumbers(long long n) {
        long long x = n/2;
        long long ans = 1;
        long long mod = 1000000007;
        long long base = 20;
        
        while(x > 0){
            if(x % 2 == 1){ // if x is odd
                ans = ans*base;
                ans %= mod;
            }
            base = (base * base) % mod;// square of base
            x /= 2;
        } 
        if (n % 2 != 0) ans = (ans * 5) % mod; // if n is odd multiply with 5
        return ans;
    }
};