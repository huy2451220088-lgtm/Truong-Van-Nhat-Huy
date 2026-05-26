#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Duyệt từ chữ số cuối cùng (hàng đơn vị) ngược lên đầu
        for (int i = n - 1; i >= 0; i--) {
            // Nếu chữ số nhỏ hơn 9, chỉ cần cộng 1 và trả về kết quả ngay
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            
            // Nếu chữ số là 9, nó sẽ trở thành 0 và tiếp tục vòng lặp để cộng 1 vào số trước đó
            digits[i] = 0;
        }
        
        // Nếu vòng lặp kết thúc mà chưa return, nghĩa là tất cả các chữ số đều là 9 (ví dụ: 999)
        // Khi đó mảng hiện tại là [0, 0, 0]. Ta cần thêm số 1 vào đầu mảng.
        digits.insert(digits.begin(), 1);
        
        return digits;
    }
};