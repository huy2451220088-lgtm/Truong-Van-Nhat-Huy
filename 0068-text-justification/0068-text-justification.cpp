class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> res;
        int i = 0;
        
        while (i < words.size()) {
            int j = i + 1;
            int lineLength = words[i].length();
            while (j < words.size() && lineLength + 1 + words[j].length() <= maxWidth) {
                lineLength += 1 + words[j].length();
                j++;
            }
            
            string line = "";
            int diff = j - i - 1;
            if (j == words.size() || diff == 0) {
                for (int k = i; k < j; k++) {
                    line += words[k] + " ";
                }
                line.pop_back();
                while (line.length() < maxWidth) line += " ";
            } else {
                int spaces = (maxWidth - lineLength) / diff;
                int extra = (maxWidth - lineLength) % diff;
                for (int k = i; k < j; k++) {
                    line += words[k];
                    if (k < j - 1) {
                        line += string(1 + spaces + (k - i < extra ? 1 : 0), ' ');
                    }
                }
            }
            res.push_back(line);
            i = j;
        }
        return res;
    }
};