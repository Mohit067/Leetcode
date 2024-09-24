#include<iostream>
#include<vector>
using namespace std;
int main(){

}
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int noz = 0;
        int noo = 0;
        int noT = 0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0) noz++;
            if(nums[i] == 1) noo++;
            if(nums[i] == 2) noT++; 
        }
        for(int i=0; i<nums.size(); i++){
            if(i<noz) nums[i] = 0;
            else if(i<noo+noz) nums[i] = 1;
            else nums[i] = 2;
        }
    }
};