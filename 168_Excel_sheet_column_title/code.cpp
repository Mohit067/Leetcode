#include<iostream>
#include<algorithm>
using namespace std;
int main(){}
class Solution {
public:
    string convertToTitle(int n) {
        string str = "";
        while(n){
            n--;//because we suppose A == 0
            int curr = n%26; //give that value whose append with 'A'
            str.push_back((char)(curr+'A'));
            n = n/26;
        }
        reverse(str.begin(),str.end());
        return str;
    }
};
