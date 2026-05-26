class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int temp = x;
        
        // Bước 1: Tính tổng các chữ số
        while (temp > 0) {
            sum += temp % 10; // Lấy chữ số cuối cùng
            temp /= 10;      // Loại bỏ chữ số cuối cùng
        }
        
        // Bước 2: Kiểm tra điều kiện số Harshad
        if (x % sum == 0) {
            return sum;
        } else {
            return -1;
        }
    }
};