#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for (int num : nums) {
            // Nếu phiếu bầu hiện tại bằng 0, ta chọn số hiện tại làm ứng cử viên mới
            if (count == 0) {
                candidate = num;
            }

            // Nếu gặp số giống ứng cử viên thì tăng phiếu, ngược lại thì giảm phiếu
            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }

        return candidate;
    }
};