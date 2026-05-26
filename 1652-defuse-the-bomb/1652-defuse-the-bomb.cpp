#include <vector>
#include <numeric>

using namespace std;

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> result(n, 0);
        
        if (k == 0) return result;

        // Xác định phạm vi bắt đầu của cửa sổ trượt (l và r)
        int l, r;
        if (k > 0) {
            l = 1;
            r = k;
        } else {
            l = n + k; // k âm nên n + k tương đương n - |k|
            r = n - 1;
        }

        // Tính tổng của cửa sổ đầu tiên
        int currentSum = 0;
        for (int i = l; i <= r; i++) {
            currentSum += code[i % n];
        }

        // Di chuyển cửa sổ trượt qua từng phần tử
        for (int i = 0; i < n; i++) {
            result[i] = currentSum;
            
            // Trượt cửa sổ: Trừ phần tử cũ ở bên trái, cộng phần tử mới ở bên phải
            currentSum -= code[l % n];
            l++;
            r++;
            currentSum += code[r % n];
        }

        return result;
    }
};