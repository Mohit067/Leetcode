#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
#include<math.h>
using namespace std;
int main(){}

class Solution {
public:
    bool isPerfectSquare(int num) {  //T.C. ==> O(1)
        int root = sqrt(num);
        if(root*root == num) return true;
        else return false; 
    }
};


