#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int mian(){}
class Solution {
public:
    int minimumSum(int num) {
        int n = num;
        int ones = n%10;
        n /= 10;
        int twos = n%10;
        n /= 10;
        int hund = n%10;
        n /= 10;
        int thous = n%10;

        vector<int> v(4);
        v[0] = ones;
        v[1] = twos;
        v[2] = hund;
        v[3] = thous;

        sort(v.begin(), v.end());

        int new1 = v[0];
        new1 *= 10;
        new1 += v[2];

        int new2 = v[1];
        new2 *= 10;
        new2 += v[3];

        return new1+new2;
    }
};