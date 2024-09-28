#include<iostream>
#include<vector>
using namespace std;
int mian(){}
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<char> v(150 , '#');
        int n = s.size();
        int m = t.size();

        if(n != m) return false; 
        for(int i=0; i<n; i++){
            int idx = s[i];
            if(v[idx] == '#') v[idx] = t[i];
            else {
                if(v[idx] != t[i]) return false;
            }
        }

        for(int i=0; i<v.size(); i++){
            v[i] = '#';
        }
        for(int i=0; i<n; i++){
            int idx = t[i];
            if(v[idx] == '#') v[idx] = s[i];
            else {
                if(v[idx] != s[i]) return false;
            }
        }
        return true;
    }
};