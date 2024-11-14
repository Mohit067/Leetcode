#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){}
class Solution {
public:
    string finalString(string s) {
        string str = "";
        for(int j=0; j<s.size(); j++){
            if(s[j] != 'i') str += s[j];
            else reverse(str.begin(), str.end()); // Reverse the entire string
        }
        return str;
    }
};