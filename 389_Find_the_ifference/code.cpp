#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
using namespace std;
int main(){}

class Solution {
public:
    char findTheDifference(string s, string t) {
        //sort both strings
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        //two pointer
        int i = 0;
        int j = 0;
        while(i<s.length() && j<t.length()){
            if(s[i] != t[j]) return t[j];
            i++;
            j++;
        }
        return t[j];
    }
};