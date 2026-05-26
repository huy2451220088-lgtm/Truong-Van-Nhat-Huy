class Solution {
public:
    int fib(int n) {
        // Trường hợp cơ bản: F(0) = 0, F(1) = 1
        if (n <= 1) return n;

        int a = 0; // Đại diện cho F(i-2)
        int b = 1; // Đại diện cho F(i-1)
        int sum = 0;

        for (int i = 2; i <= n; i++) {
            sum = a + b; // F(i) = F(i-1) + F(i-2)
            a = b;       // Cập nhật F(i-2) cho vòng lặp sau
            b = sum;     // Cập nhật F(i-1) cho vòng lặp sau
        }

        return b;
    }
};