#include<istream>
using namespace std;
int main(){}
class Solution {
public:
    int titleToNumber(string str) {
        int result = 0;
        for(int i=0; i<str.length();i++){
            result = result * 26 + (str[i] - 'A' +1);// for 'A' => value is 26
            //initial result = 0;
            // result = 0*26 + ('A' - 'A' + 1) === 1
        }
        return result;//1
    }
};