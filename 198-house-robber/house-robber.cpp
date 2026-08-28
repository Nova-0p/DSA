class Solution {
private:
    int tab(vector<int> &nums,int n,vector<int> &dp){
        dp[0]=nums[0];
        for(int i=1;i<n;i++){
            int take=nums[i];
            if(i>1){
                take+=dp[i-2];
            }
            int not_take=dp[i-1];

            dp[i]=max(take,not_take);
        }
        return dp[n-1];
    }
    int NonAdj(vector<int> &nums,int ind,vector<int> &dp){
        if(ind==0){
            return(nums[ind]);
        }
        if(ind<0){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int pick=nums[ind]+NonAdj(nums,ind-2,dp);
        int notPick=0+NonAdj(nums,ind-1,dp);

        return dp[ind]=max(pick,notPick);
    }
public:
    int rob(vector<int>& nums) {
         int n=nums.size();
        vector<int> dp(n,-1);
       
     //int ans=NonAdj(nums,n-1,dp);
     int ans=tab(nums,n,dp);
     return ans;   
    }
};