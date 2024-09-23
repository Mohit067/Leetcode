#include<iostream>
#include<vector>
using namespace std;
vector<int> getRow(int n) {
        long long i = (long long) n;
        long long curr = 1;
        vector<int> ans;
        for(int j=0; j<=i; j++){
            ans.push_back((int)curr);
            curr = curr*(i-j)/(j+1);
        }
        return ans;
    }
int main(){

}