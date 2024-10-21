#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
#include<math.h>
using namespace std;
int main(){}

class Solution {
public:
    bool isperfectSquare(int n){
        int root = sqrt(n);
        if(root*root == n) return true;
        else return false;  
    }
    bool judgeSquareSum(int c) {
        int x = 0;//c == 5 // x =0; y=5;
        int y = c;
        while(x<=y){
            if(isperfectSquare(x) && isperfectSquare(y)){
                return true;
            }
            else if(!isperfectSquare(y)){
                y = (int)sqrt(y)*(int)sqrt(y);//here sqrt(y)=2; and y=4
                x = c-y;//x=1
            }
            else{
                x = ((int)sqrt(x) + 1)*((int)sqrt(x) + 1);
                y = c-x;
            }
        }
        return false;
    }
};
