#include <vector>
using namespace std;

class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        // Lấy tọa độ 3 điểm
        int x1 = points[0][0], y1 = points[0][1];
        int x2 = points[1][0], y2 = points[1][1];
        int x3 = points[2][0], y3 = points[2][1];

        // Sử dụng tích chéo để kiểm tra tính thẳng hàng
        // (y2 - y1) / (x2 - x1) != (y3 - y2) / (x3 - x2)
        return (y2 - y1) * (x3 - x2) != (y3 - y2) * (x2 - x1);
    }
};