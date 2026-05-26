#include <cmath>

class Solution {
public:
    bool checkPerfectNumber(int num) {
        // Theo định nghĩa, số hoàn hảo phải là số dương và > 1
        if (num <= 1) return false;

        int sum = 1; // 1 luôn là ước số của mọi số dương
        int sqrt_n = sqrt(num);

        // Duyệt từ 2 đến căn bậc hai của num để tìm các cặp ước số
        for (int i = 2; i <= sqrt_n; i++) {
            if (num % i == 0) {
                sum += i;
                // Nếu ước số không phải là căn bậc hai (tránh cộng trùng số chính phương)
                if (i * i != num) {
                    sum += num / i;
                }
            }
        }

        return sum == num;
    }
};