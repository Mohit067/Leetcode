#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
using namespace std;
int main(){}

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n == 1) return strs[0];
        sort(strs.begin(), strs.end());
        string first  = strs[0];
        string last = strs[n-1];
        string result = "";

        for(int i=0; i<(min(first.size(),last.size())); i++){
            if(first[i] == last[i]){
                result += first[i];
            }
            else return result;
        }
        return result;
    }
};
