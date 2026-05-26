#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int convertTime(string current, string correct) {
        // Hàm phụ quy đổi HH:MM sang phút
        auto toMinutes = [](string time) {
            int hh = stoi(time.substr(0, 2));
            int mm = stoi(time.substr(3, 2));
            return hh * 60 + mm;
        };

        int diff = toMinutes(correct) - toMinutes(current);
        int operations = 0;
        
        // Danh sách các bước tăng thời gian cho phép
        vector<int> increments = {60, 15, 5, 1};

        for (int inc : increments) {
            // Cộng số lần thực hiện bước inc vào tổng số thao tác
            operations += diff / inc;
            // Cập nhật phần dư còn lại sau khi đã thực hiện bước inc
            diff %= inc;
        }

        return operations;
    }
};