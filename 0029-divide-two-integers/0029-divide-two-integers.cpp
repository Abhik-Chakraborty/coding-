class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX; 
        }

        
        long long dividend_abs = abs((long long)dividend);
        long long divisor_abs = abs((long long)divisor);
        bool negative = (dividend < 0) ^ (divisor < 0);

        long long quotient = 0;
        while (dividend_abs >= divisor_abs) {
            long long temp_divisor = divisor_abs, multiple = 1;
            while (dividend_abs >= (temp_divisor << 1)) {
                temp_divisor <<= 1;
                multiple <<= 1;
            }
            dividend_abs -= temp_divisor;
            quotient += multiple;
        }

        if (negative) {
            quotient = -quotient;
        }

        return max((long long)INT_MIN, min((long long)INT_MAX, quotient));
    }
};