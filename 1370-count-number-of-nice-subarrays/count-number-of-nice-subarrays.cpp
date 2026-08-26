class Solution {
public:
    int AtMost(vector<int>& nums, int k){
        int l=0;
        int count=0;
        int ans=0;
        for(int r=0;r<nums.size();r++){
            if(nums[r]%2!=0){
                count++;
            }
            while(count>k){
                if(nums[l]%2!=0){
                    count--;
                }
                l++;
            }
            if(count<=k){
                ans+=r-l+1;
            }
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return AtMost(nums,k)-AtMost(nums,k-1);
        
    }
};