#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string str) {
        stack<char> st;

        for (char ch : str) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty()) return false; // No matching opening

                char top = st.top();
                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
                st.pop(); // matched
            }
        }

        return st.empty(); // All matched
    }
};