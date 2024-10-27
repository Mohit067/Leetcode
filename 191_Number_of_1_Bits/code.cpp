#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
using namespace std;
int main(){}

class Solution {
public:
    int hammingWeight(int n) {
        vector<int>v;
        while(n>0){
            if(n%2 == 1) v.push_back(1);
            n /= 2;
        }
        int count = 0;
        for(int i=0; i<v.size(); i++){
            if(v[i] == 1) count++;
        }
        return count;
    }
};