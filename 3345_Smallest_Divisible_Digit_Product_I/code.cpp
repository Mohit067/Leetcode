#include<iostream>
using namespace std;
int main(){}

class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans = n;
        while(true){
            int pro = 1;//product of output digits
            int temp = ans;//make temp variable to store ans or n
            while(temp>0){// to find digits in a number
                int rem = temp%10;
                pro *= rem;
                temp /= 10;
            }
            if(pro % t == 0) return ans;//check the output is corrct or not
            ans++;
        }
        return ans;//this is optional
    }
};