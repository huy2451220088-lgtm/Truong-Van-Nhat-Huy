#include <cmath>

class Solution {
public:
    bool isThree(int n) {
        if (n < 4) return false;

        // B1: Kiểm tra xem n có phải là số chính phương không
        int root = sqrt(n);
        if (root * root != n) return false;

        // B2: Kiểm tra xem căn bậc hai (root) có phải là số nguyên tố không
        return isPrime(root);
    }

private:
    bool isPrime(int num) {
        if (num < 2) return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) return false;
        }
        return true;
    }
};