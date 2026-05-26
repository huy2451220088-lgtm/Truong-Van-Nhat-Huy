class Solution {
public:
    bool isPowerOfThree(int n) {
        // Cách tối ưu O(1) không dùng vòng lặp:
        // Lũy thừa lớn nhất của 3 trong phạm vi kiểu int 32-bit là 3^19 = 1,162,261,467.
        // Vì 3 là số nguyên tố, bất kỳ n nào là lũy thừa của 3 cũng phải là ước của 3^19.
        return n > 0 && 1162261467 % n == 0;
    }
};