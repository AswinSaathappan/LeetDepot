class Solution {
public:
    double myPow(double x, int n) {
        long long N = n; // convert to long long to handle INT_MIN safely

        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        double result = 1.0;

        while (N > 0) {
            if (N % 2 == 1) {
                result *= x; // if power is odd, multiply once
            }
            x *= x; // square the base
            N /= 2; // halve the power
        }

        return result;
    }
};
