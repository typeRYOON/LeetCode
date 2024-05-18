/* easy :: array */
/*
    Swap elements then invert.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image)
    {
        uint8_t n = image.size(), n2 = image.size() >> 1;
        bool odd = n & 0x1 ? true : false;
        for (uint8_t row = 0; row < n; ++row)
        {
            for (uint8_t i = 0; i < n2; ++i)
            {
                swap(image[row][i], image[row][n - i - 1]);
                image[row][i] = !image[row][i];
                image[row][n - i - 1] = !image[row][n - i - 1];
            }
            if (odd) { image[row][n2] = !image[row][n2]; }
        }
        return image;
    }
};