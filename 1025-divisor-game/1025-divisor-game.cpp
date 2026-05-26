class Solution {
public:
    bool divisorGame(int n) {
        // Alice sẽ thắng nếu n là số chẵn, và thua nếu n là số lẻ.
        return n % 2 == 0;
    }
};