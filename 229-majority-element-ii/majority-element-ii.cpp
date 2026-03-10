class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ans1=-1;
        int ans2=-1;
        int count1=0;
        int count2=0;

        for(int i=0;i<n;i++){
            if(nums[i]==ans1){
                count1++;
            }
            else if(nums[i]==ans2){
                count2++;
            }
            else if(count1==0){
                ans1=nums[i];
                count1++;
            }
            else if(count2==0){
                ans2=nums[i];
                count2++;}
            else{
                count1--;
                count2--;
            }
        }
        count1 = count2 = 0;
    for (int num : nums) {
        if (num == ans1) count1++;
        else if (num == ans2) count2++;
    }

    vector<int> result;
    if (count1 > n / 3) result.push_back(ans1);
    if (count2 > n / 3) result.push_back(ans2);

    return result;
    }
    
};