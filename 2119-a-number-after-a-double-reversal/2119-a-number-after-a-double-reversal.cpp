class Solution {
public:
    bool isSameAfterReversals(int num) {
        // Nếu num = 0, kết quả luôn là true.
        // Nếu num > 0, kết quả là true nếu chữ số cuối cùng không phải là 0.
        if (num == 0) return true;
        
        // Kiểm tra xem num có chia hết cho 10 không
        return num % 10 != 0;
    }
};