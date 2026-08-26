class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        int count=0;
        int sum=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum-goal;
            count+=mp[rem];
            mp[sum]++;
        }
        return count;
        
        
    }
};