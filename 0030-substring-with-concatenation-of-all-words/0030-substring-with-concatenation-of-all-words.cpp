#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if (s.empty() || words.empty()) return result;

        int wordLen = words[0].length();
        int wordCount = words.size();
        int totalLen = wordLen * wordCount;
        int sLen = s.length();

        unordered_map<string, int> wordFreq;
        for (const string& w : words) {
            wordFreq[w]++;
        }

        for (int i = 0; i < wordLen; ++i) {
            int left = i;
            int count = 0;
            unordered_map<string, int> currentFreq;

            for (int j = i; j <= sLen - wordLen; j += wordLen) {
                string sub = s.substr(j, wordLen);

                if (wordFreq.count(sub)) {
                    currentFreq[sub]++;
                    count++;

                    while (currentFreq[sub] > wordFreq[sub]) {
                        string leftSub = s.substr(left, wordLen);
                        currentFreq[leftSub]--;
                        count--;
                        left += wordLen;
                    }

                    if (count == wordCount) {
                        result.push_back(left);
                    }
                } else {
                    currentFreq.clear();
                    count = 0;
                    left = j + wordLen;
                }
            }
        }

        return result;
    }
};