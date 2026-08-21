class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        int l=0;
        int r=height.size()-1;
        int rmax=0;
        int lmax=0;
        while(l<r){
            lmax=max(height[l],lmax);
            rmax=max(height[r],rmax);
            if(lmax<=rmax){
                ans+=lmax-height[l];
                l++;
            }else{
                ans+=rmax-height[r];
                r--;
            }
        }
        return ans;
    }
};