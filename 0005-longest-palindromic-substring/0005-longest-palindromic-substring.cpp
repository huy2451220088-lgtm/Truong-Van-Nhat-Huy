class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        int start = 0, max_len = 0;

        for (int i = 0; i < s.length(); i++) {
            // Trường hợp chuỗi đối xứng lẻ (ví dụ: "aba")
            int len1 = expandAroundCenter(s, i, i);
            // Trường hợp chuỗi đối xứng chẵn (ví dụ: "bb")
            int len2 = expandAroundCenter(s, i, i + 1);
            
            int len = max(len1, len2);
            if (len > max_len) {
                max_len = len;
                start = i - (len - 1) / 2;
            }
        }
        
        return s.substr(start, max_len);
    }

private:
    int expandAroundCenter(const string& s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;
    }
};