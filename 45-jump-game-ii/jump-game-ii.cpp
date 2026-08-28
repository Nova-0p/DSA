class Solution {
public:
    int jump(vector<int>& nums) {
        int farthest=0;
        int jump=0;
        int currEnd=0;

        for(int i=0;i<nums.size()-1;i++){
            farthest=max(farthest,nums[i]+i);

            if(currEnd==i){
                jump++;
                currEnd=farthest;
            }
        }
        return jump;
        
    }
};