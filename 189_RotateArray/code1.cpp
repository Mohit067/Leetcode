#include<iostream>
#include<vector>
using namespace std;
int mian(){}
class Solution {
public:
    void reverse(int i, int j, vector<int>& v){
        while(i<=j){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>n) k = k%n;

    
        //logic is here
        reverse(0, n-k-1, nums);
        reverse(n-k, n-1, nums);
        reverse(0, n-1, nums);
    }
};