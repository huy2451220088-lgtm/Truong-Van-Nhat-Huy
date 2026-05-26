class Solution {
public:
    bool isPowerOfTwo(int n) {
        // Lũy thừa của 2 phải là số dương
        // Phép toán n & (n - 1) sẽ triệt tiêu bit 1 duy nhất nếu n là lũy thừa của 2
        return n > 0 && (n & (long)n - 1) == 0;
    }
};