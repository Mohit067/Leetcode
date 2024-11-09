#include<iostream>
using namespace std;
int main(){}

class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro = 1;
        int sum = 0;

        while(n){
            int rem = n % 10;
            pro *= rem;
            sum += rem;
            n /= 10;
        }
        return pro - sum;
    }
};