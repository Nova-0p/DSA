class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int left=0;
        unordered_map<int,int>mpp;
        int maxi=0;

        for(int right=0;right<n;right++){
            mpp[fruits[right]]++;
        
        while(mpp.size()>2){
            mpp[fruits[left]]--;
            if (mpp[fruits[left]] == 0) {
                mpp.erase(fruits[left]);
                }
            left++;
        }
        int curr=0;
        for(auto a:mpp){
            curr+=a.second;
        }
        maxi=max(maxi,curr);
        }
        return maxi;
        
    }
};