#include<iostream>
#include<climits>
#include<algorithm> 
using namespace std;
int main(){}
class Solution {
public:
    int reverse(int x) {
        int n = abs(x);
        int rev = 0;
        if(x < INT_MIN) return 0;//if x is less than INT_MIN

        while(n!=0){
            if(rev > (INT_MAX / 10)) return 0;//if reverse is greater than int_max
            rev *= 10;
            if(rev > (INT_MAX - (n%10))) return 0;//if reverse is greater than int_max
            rev += (n%10);
            n /= 10;
        }
        if(x<0) rev = -rev;
        return rev;
    }
};