#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
int main(){}

class Solution {
    public:
        bool isValid(string s) {
            stack<char> st;
            for (char ch : s) {
                if (ch == '(' || ch == '{' || ch == '[') {
                    st.push(ch);  // Push opening brackets
                } else {
                    if (st.empty()) return false;  // If closing bracket appears first, return false
                    char top = st.top();
                    if ((ch == ')' && top == '(') ||
                        (ch == '}' && top == '{') ||
                        (ch == ']' && top == '[')) {
                        st.pop();  // Correct matching bracket, pop from stack
                    } else {
                        return false;  // Mismatch case
                    }
                }
            }
            return st.empty();  // If stack is empty, all brackets were matched correctly
        }
    };
    
    