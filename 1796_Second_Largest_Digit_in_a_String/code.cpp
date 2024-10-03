#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
using namespace std;
int main(){}
class Solution {
public:
    int secondHighest(string s) {
        vector<int> v;
        for(int i=0; i<s.size(); i++){
            if((int)s[i] >= 48 && (int)s[i]<=57){
                v.push_back(s[i]-48);
            }
        }
        
       int max1 = INT_MIN, max2 = INT_MIN;
       for(int i=0; i<v.size(); i++){
            if(max1 < v[i]){
                max2 = max1;
                max1 = v[i];
            }
            else if(max2 < v[i] && max1 != v[i]){
                max2 = v[i];
            }
       }
       if(max2 == INT_MIN) return -1;
       else return max2;
    }
};
