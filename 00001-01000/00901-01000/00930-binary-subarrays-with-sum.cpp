/* medium :: hashmap */
/*
    Use a hashmap to keep track of the sums seen so far.
    We increment ret if that is found when we do
    acc - goal, indicating that we've got those
    M[acc - goal] sub arrays summing to goal.
    - -       - -
    Time  :: O(n)
    Space :: O(n)
*/
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal)
    {
        unordered_map<int, int> M;
        int ret = 0, acc = 0;
        M[0] = 1;
        for (const int& num : nums)
        {
            acc += num;
            if (M.contains(acc - goal)) {
                ret += M[acc - goal];
            }
            M[acc]++;
        }
        return ret;
    }
};