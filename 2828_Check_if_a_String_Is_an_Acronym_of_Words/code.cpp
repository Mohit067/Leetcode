#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
using namespace std;
int main(){}

class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if(words.size() != s.length()) return false;
        string str = "";
        for(int i=0; i<words.size(); i++){
            char ch = words[i][0];// first charactor of every string
            str.push_back(ch);
        }
        if(s!=str) return false;
        else return true;
    }
};