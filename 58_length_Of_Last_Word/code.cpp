#include<iostream>
#include<string>
using namespace std;
int main(){}

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;
        int i = n-1;
        while(s[i] == ' '){//handling case number 2
            i--;
        }
        while(i>=0 && s[i] != ' '){//basic base case
            count++;
            i--;
        }
        return count;
    }
};