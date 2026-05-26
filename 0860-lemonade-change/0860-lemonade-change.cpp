class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int xet = 0; // mười
        
        for (int bill : bills) {
            if (bill == 5) {
                five++;
            } else if (bill == 10) {
                if (five == 0) return false;
                five--;
                xet++;
            } else {
                if (xet > 0 && five > 0) {
                    xet--;
                    five--;
                } else if (five >= 3) {
                    five -= 3;
                } else {
                    return false;
                }
            }
        }
        
        return true;
    }
};
