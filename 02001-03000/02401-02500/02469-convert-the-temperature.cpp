/* easy :: math */
/*
    Implement the given equation.
    - -       - -
    Time  :: O(1)
    Space :: O(1)
*/
class Solution {
public:
    vector<double> convertTemperature(double celsius)
    {
        return {celsius + 273.15, celsius * 1.8 + 32};
    }
};