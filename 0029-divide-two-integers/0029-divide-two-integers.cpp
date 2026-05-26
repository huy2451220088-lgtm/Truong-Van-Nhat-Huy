#include <climits>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        
        long long l_dividend = abs((long long)dividend);
        long long l_divisor = abs((long long)divisor);
        long long result = 0;
        
        int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;
        
        while (l_dividend >= l_divisor) {
            long long temp = l_divisor, multiple = 1;
            while (l_dividend >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            l_dividend -= temp;
            result += multiple;
        }
        
        return sign * result;
    }
};