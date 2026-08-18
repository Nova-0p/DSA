class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = 0;

        for (int f = 0; f < nums.size(); f++) {

            if (nums[f] != 0) {
                swap(nums[s], nums[f]);
                s++;
            }
        }
    }
};