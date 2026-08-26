class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        
        if(k==cardPoints.size()){
            return sum;
        }
        int ans=sum;
        int right=cardPoints.size()-1;
        int left=k-1;

        while(left>=0){
            sum=sum+cardPoints[right]-cardPoints[left];
            left--;
            right--;
            ans=max(sum,ans);
        }
        return ans;
        
    }
};