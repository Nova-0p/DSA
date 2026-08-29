class Solution {
public:
    static bool compare(const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end(), compare);

        vector<vector<int>> ans;

        for (auto interval : intervals) {

            if (ans.empty() || ans.back()[1] < interval[0]) {
                // No overlap
                ans.push_back(interval);
            }
            else {
                // Overlap
                ans.back()[1] = max(ans.back()[1], interval[1]);
            }
        }

        return ans;
    }
};