#include<iostream>
#include<vector>
using namespace std;
int main(){}

class Solution {
public:
    int climbStairs(int n) {
        //problem like fibonacci
        vector<int> v(n+1, 0);
        v[0] = 1;
        v[1] = 1;
        for(int i=2; i<n+1; i++){
            v[i] = v[i-1] + v[i-2];
        }
        return v[n];// total number of steps 
    }
};