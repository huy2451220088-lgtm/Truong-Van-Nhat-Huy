class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            // Tránh tràn số (overflow) thay vì dùng (left + right) / 2
            int mid = left + (right - left) / 2; 
            
            if (nums[mid] == target) {
                return mid; // Tìm thấy target, trả về chỉ số hiện tại
            } else if (nums[mid] < target) {
                left = mid + 1; // Target nằm ở nửa bên phải
            } else {
                right = mid - 1; // Target nằm ở nửa bên trái
            }
        }
        
        // Nếu không tìm thấy, 'left' chính là vị trí thích hợp để chèn target
        return left;
    }
};