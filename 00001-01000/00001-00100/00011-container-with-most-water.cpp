/* medium :: two-pointers */
/*
    Using two pointers, greedily find the max water,
    move a pointer inwards if it has a smaller height.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int mizu = -1, l = 0, r = (int)height.size() - 1;
        while (l < r)
        {
            mizu = max(mizu, min(height[l], height[r]) * (r - l));
            if (height[l] < height[r]) { l++; }
            else                       { r--; }
        }
        return mizu;
    }
};