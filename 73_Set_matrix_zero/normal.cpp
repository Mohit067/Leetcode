#include<iostream>
#include<vector>
using namespace std;
int mian(){}
class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();

        //make two 1D vector
        vector<int> row(m, false);
        vector<int> col(n, false);

        //traverse in 2d vector
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(arr[i][j] == 0){
                    row[i] = true;
                    col[j] = true;
                }
            }
        }

        // fill 0's in rows
        for(int i=0; i<m; i++){
            if(row[i] == true){
                for(int j=0; j<n; j++){
                    arr[i][j] = 0;  
                }
            }
        }

        //fill 0's in cols
        for(int j=0; j<n; j++){
            if(col[j] == true){
                for(int i=0; i<m; i++){
                    arr[i][j] = 0;
                }
            }
        }
    }
};