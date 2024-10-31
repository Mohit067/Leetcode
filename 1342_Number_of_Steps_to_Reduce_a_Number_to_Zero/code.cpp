#include<iostream>
using namespace std;
int main(){}

class Solution {
public:
    int numberOfSteps(int n) {
        //using recursion
        if(n==0) return 0;
        if(n%2==0) return 1 + numberOfSteps(n/2);
        else return 1 + numberOfSteps(n-1);
    }
};