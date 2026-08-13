class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int count=0;
        int sum=0;

        mp[0]=1; // 0th index start

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];

            int rem=sum-k;

            count+=mp[rem];

            if(mp.find(rem)!=mp.end()){
                mp[sum]++;
            }
        }
        return count;

        
    }
};