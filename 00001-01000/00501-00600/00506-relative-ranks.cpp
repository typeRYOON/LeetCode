/* easy :: priority-queue */
/*
    Use a priority queue. Sort based on score[i], use
    some pair object to create { score[i], i }, keep
    track of the index.
    - -                  - -
    Time  :: O(n) ::     2ms
    Space :: O(n) :: 13.63MB
*/
class Solution {
public:
    typedef pair<int, uint16_t> e;
    vector<string> findRelativeRanks(vector<int>& score)
    {
        uint16_t i = 0, n = score.size();
        vector<string> ret(n);
        auto compare = [](const e& a, const e& b) { 
            return a.first < b.first;
        };
        priority_queue<e, std::vector<e>, decltype(compare)> pq(compare);

        // Populate pq ::
        for (; i < n; ++i) { pq.push(make_pair(score[i], i)); }

        // The first three popped elements in the pq have unique strings ::
        string s[] = { "Gold Medal", "Silver Medal", "Bronze Medal" };
        for (i = 0; i < min(static_cast<uint16_t>(3), n); ++i)
        {
            cout << pq.top().first << ' ' << i  << ' '<< static_cast<int>(pq.top().second) << '\n';
            ret[pq.top().second] = s[i];
            pq.pop();
        }

        // Pop the remaining elements in the pq ::
        i = 4;
        while (!pq.empty())
        {
            ret[pq.top().second] = to_string(i++);
            pq.pop();
        }
        return ret;
    }
};
