#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
#include<math.h>
using namespace std;
int main(){}

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int curr_min = prices[0];
        int profit = 0;

        for(int i=0; i<n; i++){
            if(prices[i] < curr_min){
                curr_min = prices[i];//best time to buy a product
            }
            else{ // prices[i] >= curr_min
                profit = max(profit, prices[i] - curr_min);//best time to shell a product
            }
        }
    return profit;
    }
};