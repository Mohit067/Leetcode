#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
using namespace std;
int main(){}

class Solution {
public:
    double myPow(double x, int n) {
        long binForm = n; 
        if(n<0){// for negative to positive convertion
            x = (1/x);
            binForm = -binForm;
        }
        if(n == 0) return 1;//base case
        if(n == 1) return x;//base case
        
        double ans = myPow(x , binForm/2);//function calling
        if(binForm%2 == 0){
            return ans*ans;
        }
        else return ans*ans*x;
    }
};