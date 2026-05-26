#include <vector>

using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        // Kelvin = Celsius + 273.15
        double kelvin = celsius + 273.15;
        
        // Fahrenheit = Celsius * 1.80 + 32.00
        double fahrenheit = celsius * 1.80 + 32.00;
        
        // Trả về mảng kết quả [kelvin, fahrenheit]
        return {kelvin, fahrenheit};
    }
};