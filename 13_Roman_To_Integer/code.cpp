#include<iostream>
#include<string>
using namespace std;
int main(){}

class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        int n = s.size();
        for(int i=n-1; i>=0; i--){
            if(i>0){
                if(s[i-1] == 'I' && s[i] == 'V'){
                    ans += 4;
                    i--;
                    continue;//vim
                }
                else if(s[i-1] == 'I' && s[i] == 'X'){
                    ans += 9;
                    i--;
                    continue;
                }
                else if(s[i-1] == 'X' && s[i] == 'L'){
                    ans += 40;
                    i--;
                    continue;
                }
                else if(s[i-1] == 'X' && s[i] == 'C'){
                    ans += 90;
                    i--;
                    continue;
                }
                else if(s[i-1] == 'C' && s[i] == 'D'){
                    ans += 400;
                    i--;
                    continue;
                }
                else if(s[i-1] == 'C' && s[i] == 'M'){
                    ans += 900;
                    i--;
                    continue;
                }
            }
            if(s[i] == 'I') ans += 1;
            if(s[i] == 'V') ans += 5;
            if(s[i] == 'X') ans += 10;
            if(s[i] == 'L') ans += 50;
            if(s[i] == 'C') ans += 100;
            if(s[i] == 'D') ans += 500;
            if(s[i] == 'M') ans += 1000;
        }
        return ans;
    }
};