#include<iostream>
#include<vector>
using namespace std;
int mian(){}
class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        bool zerothRow = false;
        bool zerothCol = false;

        for(int j=0; j<n; j++){ // 0's in first row
            if(arr[0][j] == 0){
                zerothRow = true;
                break;
            } 
        }
        for(int i=0; i<m; i++){ // 's in first cols
            if(arr[i][0] == 0){
                zerothCol = true;
                break;
            }
        }

        for(int i=1; i<m; i++){ // traverse in array
            for(int j=1; j<n; j++){
                if(arr[i][j] == 0){
                    arr[i][0] = 0; // put 0's in fist columns
                    arr[0][j] = 0; // put 0's in first row
                }
            }
        }

        // make all zero in columns
        for(int i=1; i<m; i++){
            if(arr[i][0] == 0){
                for(int j=1; j<n; j++){
                    arr[i][j] = 0;
                }
            }
        }
        //make all zero in rows
        for(int j=1; j<n; j++){
            if(arr[0][j] == 0){
                for(int i=1; i<m; i++){
                    arr[i][j] = 0;
                }
            }
        }
        //make zero in first row
        if(zerothRow == true){
            for(int j=0; j<n; j++){
                arr[0][j] = 0;
            }
        }
        //make zero in first column
        if(zerothCol == true){
            for(int i=0; i<m; i++){
                arr[i][0] = 0;
            }
        }

    }
};