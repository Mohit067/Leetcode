#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int mian(){}
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v(n, 0);
        if(n%2 != 0) n--;
        int a = 1;
        for(int i=0; i<n; i+=2){// focus here
            v[i] = a;
            v[i+1] = -a;
            a++;
        }
        return v; 
    }
};