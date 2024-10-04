#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
using namespace std;
int main(){}
class Solution {
public:
    int numberOfBeams(vector<string>& arr) {
        int n = arr.size();
        int prevOnes = 0;
        int laserCount = 0;
        for(int i=0; i<n; i++){
            string s = arr[i];
            int currOnes = 0;
            for(int j=0; j<s.length(); j++){
                if(s[j] == '1') currOnes++;
            }
            laserCount += (currOnes*prevOnes);
            if(currOnes != 0) prevOnes = currOnes;

        }
        return laserCount;
    }
};