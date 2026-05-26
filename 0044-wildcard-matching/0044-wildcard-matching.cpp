class Solution {
public:
    bool isMatch(string s, string p) {
        int sIdx = 0, pIdx = 0, match = 0, starIdx = -1;            
        while (sIdx < s.length()) {
            if (pIdx < p.length() && (p[pIdx] == '?' || p[pIdx] == s[sIdx])) {
                sIdx++;
                pIdx++;
            } else if (pIdx < p.length() && p[pIdx] == '*') {
                starIdx = pIdx;
                match = sIdx;
                pIdx++;
            } else if (starIdx != -1) {
                pIdx = starIdx + 1;
                match++;
                sIdx = match;
            } else return false;
        }
        
        while (pIdx < p.length() && p[pIdx] == '*') pIdx++;
        return pIdx == p.length();
    }
};