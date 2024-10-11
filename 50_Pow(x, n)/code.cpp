#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
using namespace std;
int main(){}

class Solution {
public:
    double myPow(double x, int n) {
        long binForm = n; //for batter understanding we will take n as a binary-form(binForm)
        if(n<0){
            x = (1/x);
            binForm = -binForm;
        }
        
        double ans = 1;
        while(binForm > 0){
            if(binForm % 2 == 1){
                ans *= x;
            }
            x *= x;
            binForm /= 2;
        }
        return ans;

        //T.C. = O(log n)
    }
};