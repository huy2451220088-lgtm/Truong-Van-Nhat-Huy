#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            
            if (i >= 0) {
                sum += a[i] - '0'; // Chuyển ký tự thành số
                i--;
            }
            if (j >= 0) {
                sum += b[j] - '0';
                j--;
            }

            // Thêm chữ số hàng đơn vị của tổng vào kết quả
            result += to_string(sum % 2);
            
            // Tính biến nhớ cho hàng tiếp theo
            carry = sum / 2;
        }

        // Đảo ngược chuỗi vì ta đang cộng từ phải sang trái
        reverse(result.begin(), result.end());
        
        return result;
    }
};