#include<iostream>
using namespace std;
int main(){}

class Solution {
public:
    int numberOfSteps(int num){
        if(num==0) return 0;
        int count = 0;
        while(num > 0){
            if(num%2==0){
                num /= 2;
                count++;
                num/2;
            }
            else{
                num = num-1;
                count++;
            }
        }
        return count;
    }
};