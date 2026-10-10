class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow=0;
        for(int i=1;i<nums.size();i++){
            if(nums[slow]!=nums[i]){
                slow++;
                swap(nums[slow],nums[i]);
            }
            
    
            
        } 
        return slow+1;
    }
};