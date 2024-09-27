#include<iostream>
#include<vector>
using namespace std;
int mian(){}
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int rows = image.size();
        int cols = image[0].size();
        vector<vector<int>> v;

        // first reverse each row
        for(int i=0; i<rows; i++){
            int k = 0;
            int j = image[i].size() - 1;

            while(k<j){
                swap(image[i][k] , image[i][j]);
                k++;
                j--;
            }
        }
        
        //flipping
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(image[i][j] == 0) image[i][j] =1;
                else image[i][j] =0;
            }
        }
        return image;
    }
};