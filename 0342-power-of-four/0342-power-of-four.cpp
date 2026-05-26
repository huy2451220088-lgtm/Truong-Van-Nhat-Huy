class Solution {
public:
    bool isPowerOfFour(int n) {
        /**
         * Điều kiện để n là lũy thừa của 4:
         * 1. n > 0.
         * 2. n phải là lũy thừa của 2: (n & (n - 1)) == 0.
         * 3. Số 1 duy nhất trong hệ nhị phân phải nằm ở vị trí lẻ (vị trí 1, 3, 5...).
         * Các số này khi AND với 0xAAAAAAAA (101010...10) sẽ bằng 0.
         * Hoặc đơn giản hơn: (n - 1) % 3 == 0.
         */
        return n > 0 && (n & (n - 1)) == 0 && (n - 1) % 3 == 0;
    }
};