class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int fast=0;fast<nums.size();fast++){
            if(nums[fast]!=0){
                swap(nums[fast],nums[i]);
                i++;
            }
        }
    }
};