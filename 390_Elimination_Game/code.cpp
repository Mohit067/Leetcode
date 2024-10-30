#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
using namespace std;
int lastRemaining(int n) {
        if(n==1) return 1;
        int step = 1;// count the every step
        int head = 1;// every first element
        int remain = n;//remaining element
        bool left = true;// left to right
        while(remain > 1){
            if(left || remain&1){//cheking even or add using bitwise operator
                head += step;
                cout<<head<<endl;
            }

            step *= 2;
            remain /= 2;
            left = !left;
        }
        
        return head;
    }
int main(){
    lastRemaining(10000);
}
