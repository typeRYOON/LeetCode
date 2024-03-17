/* easy :: two-pointers */
/*
    Use a two pointer approach. Move invalid elements
    to the back of the array, swap front invalid elements
    with valid back elements.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    int removeElement(vector<int>& n, int v)
    {
        int l = 0, r = n.size() - 1;
        int k = 0;
        // Case - Size 1, valid item ::
        if (l == r && n[0] != v) { return 1; }

        while (l < r)
        {
            while (r >= 0 && n[r] == v) { r--; }
            if (r < l) { break; }
            if (n[l] == v) {
                swap(n[l], n[r]);
            }
            l++;
        }
        // Case - Fully valid array ::
        while (l < n.size() && n[l] != v) { l++; }
        return l;
    }
};