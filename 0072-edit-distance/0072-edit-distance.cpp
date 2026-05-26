class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.length(), n = word2.length();
        vector<int> pre(n + 1, 0), cur(n + 1, 0);
        
        for (int j = 1; j <= n; j++) pre[j] = j;
        
        for (int i = 1; i <= m; i++) {
            cur[0] = i;
            for (int j = 1; j <= n; j++) {
                if (word1[i - 1] == word2[j - 1]) {
                    cur[j] = pre[j - 1];
                } else {
                    cur[j] = min({pre[j - 1], pre[j], cur[j - 1]}) + 1;
                }
            }
            pre = cur;
        }
        return m == 0 ? n : pre[n];
    }
};