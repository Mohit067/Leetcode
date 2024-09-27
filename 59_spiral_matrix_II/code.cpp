#include<iostream>
#include<vector>
using namespace std;
int mian(){}
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n, vector<int>(n));
        int minr = 0;
        int minc = 0;
        int maxr = n-1;
        int maxc = n-1;
        int count = 0;
        int tne = n*n;
        int a = 1;
        while(count<tne){
            //right
            for(int j=minc; j<= maxc && count<tne; j++){
                v[minr][j] = a++;
                count++;
            }
            minr++;

            // down
            for(int i=minr; i<=maxr && count<tne; i++){
                v[i][maxc] = a++;
                count++;
            }
            maxc--;
            // left
            for(int j=maxc; j>=minc && count<tne; j--){
                v[maxr][j] = a++;
                count++;
            }
            maxr--;

            //up
            for(int i = maxr; i>=minr && count<tne; i--){
                v[i][minc] = a++;
                count++;
            }
            minc--;
        }
        return v;
    }
};