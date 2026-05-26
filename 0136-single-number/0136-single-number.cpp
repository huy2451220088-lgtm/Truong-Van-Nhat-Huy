#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        
        // XOR tất cả các phần tử trong mảng
        for (int num : nums) {
            result ^= num;
        }
        
        return result;
    }
};