#include <iostream>
#include <stack>
using namespace std;

class StockSpanner {
private:
    stack<pair<int, int>> st;  // pair: <price, span>

public:
    StockSpanner() {
        // Constructor doesn't need to do anything
    }

    int next(int price) {
        int span = 1;

        // While the stack is not empty and the price at the top of stack is less than or equal to current price
        while (!st.empty() && st.top().first <= price) {
            int previous_price = st.top().first;
            int previous_span = st.top().second;

            span += previous_span;
            st.pop();  // remove the smaller price from stack
        }

        // Push the current price and its span to the stack
        st.push({price, span});
        return span;
    }
};
