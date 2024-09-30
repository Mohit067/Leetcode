#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){}
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        if(m>n) return -1;

        for(int i=0; i<n-m+1; i++){
            if(haystack[i] == needle[0]){
                // check
                bool flag = true; // true means needle is there
                for(int j =0; j<m; j++){
                    if(haystack[i+j] != needle[j]){
                        flag = false;
                        break;
                    }
                }
                if(flag == true) return i;
            }
        }
        return -1;
    }
};
