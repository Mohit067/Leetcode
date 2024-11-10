#include<iostream>
#include<string>
using namespace std;
int main(){}

class Solution {
public:
    bool isBalanced(string num) {
        int evensum = 0;
        int oddsum = 0;
        int n = num.size();
        for(int i=0; i<n; i++){
            int digit = num[i] - '0';// converts num[i] from a character to its actual integer value
            if(i%2 == 0) evensum += digit;
            else oddsum += digit;
        }
        if(evensum == oddsum) return true;
        else return false;
    }
};