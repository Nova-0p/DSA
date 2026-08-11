class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // (gpt soln)
         int count = 0;
        int candidate = 0;

        // Phase 1: Find the potential candidate
        for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                candidate = nums[i];
            }
            if (nums[i] == candidate)
                count++;
            else
                count--;
                }
    return candidate;
    }
};