#include<istream>
using namespace std;
int main(){}
class Solution {
public:
    int titleToNumber(string str) {
        long long sum = 0;
        long long a = 1;
        int n = str.length();
        for(int i=n-1; i>=0; i--){
            char ch = str[i];// take a character
            int c = (long long)ch-64;//convert into interger
            c = c*a;
            sum += c;
            a *= 26;
        }
        return sum;
    }
};