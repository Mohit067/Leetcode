#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
#include<math.h>
using namespace std;
int main(){}

class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i = 0;
        long long j = sqrt(c);

        while(i<=j){
            if((i*i + j*j) == c) return true;
            else if(i*i + j*j > c) j--;
            else i++;
        }
        return false;
    }
};