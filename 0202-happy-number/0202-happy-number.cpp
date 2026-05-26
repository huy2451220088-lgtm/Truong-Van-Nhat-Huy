class Solution {
public:
    // Hàm phụ để tính tổng bình phương các chữ số
    int getNext(int n) {
        int totalSum = 0;
        while (n > 0) {
            int d = n % 10; // Lấy chữ số cuối
            totalSum += d * d;
            n /= 10;        // Loại bỏ chữ số cuối
        }
        return totalSum;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = getNext(n);

        // Vòng lặp chạy cho đến khi "thỏ" chạm mốc 1 
        // hoặc khi "thỏ" đuổi kịp "rùa" (phát hiện vòng lặp vô tận)
        while (fast != 1 && slow != fast) {
            slow = getNext(slow);           // Rùa đi 1 bước
            fast = getNext(getNext(fast));  // Thỏ đi 2 bước
        }

        // Nếu dừng lại ở 1 thì là số hạnh phúc
        return fast == 1;
    }
};