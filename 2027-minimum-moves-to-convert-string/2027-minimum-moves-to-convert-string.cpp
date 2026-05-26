#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int minimumMoves(string s) {
        int moves = 0;
        int i = 0;
        int n = s.length();
        
        while (i < n) {
            if (s[i] == 'X') {
                // Phát hiện điểm cần chuyển đổi, thực hiện 1 move
                moves++;
                // Nhảy qua 3 vị trí vì move này bao phủ i, i+1, i+2
                i += 3;
            } else {
                // Nếu là 'O', chỉ cần sang vị trí kế tiếp
                i++;
            }
        }
        
        return moves;
    }
};