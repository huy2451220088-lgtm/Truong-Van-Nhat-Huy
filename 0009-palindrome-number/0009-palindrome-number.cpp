class Solution {
public:
    bool isPalindrome(int x) {
        // Trường hợp đặc biệt: Số âm và số kết thúc bằng 0 (ngoại trừ 0)
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        long reversed = 0;
        int original = x;

        // Đảo ngược số x
        while (x > 0) {
            int pop = x % 10;
            reversed = reversed * 10 + pop;
            x /= 10;
        }

        // So sánh số đã đảo ngược với số gốc
        return original == (int)reversed;
    }
};