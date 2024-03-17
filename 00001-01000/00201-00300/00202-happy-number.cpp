/* easy :: hashmap */
/*
    Use a set to check whether a sum
    has been seen before.
    - -       - -
    Time  :: O(n)
    Space :: O(n)
*/
class Solution {
public:
    bool isHappy(int n)
    {
        unordered_set<int> S;
        S.emplace(n);   
        int sum;

        while (n != 1)
        {
            sum = 0;
            while (n)
            {
                sum += (n%10) * (n%10);
                n /= 10;
            }
            if (S.contains(sum)) {
                return false;
            }
            S.emplace(sum);
            n = sum;
        }
        return true;
    }
};