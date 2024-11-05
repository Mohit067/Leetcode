#include<iostream>
using namespace std;
int main(){}

class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        long long rev = 0;
        if(x < 0) return false;
        while(n){ // reverse the number 
            rev *= 10;
            int rem = n%10;
            rev += rem;
            n /= 10;
        }
        if(x == rev) return true; // compare reverse ans original number
        return false;
    }
};