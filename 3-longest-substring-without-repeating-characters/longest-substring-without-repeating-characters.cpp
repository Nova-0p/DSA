class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[256]={0};
        int right=0;
        int left=0;
        int maxi=0;

        for(right=0;right<s.size();right++){
            hash[s[right]]++;

            while(hash[s[right]]>1){
                hash[s[left]]--;
                left++;
            }
            maxi=max(maxi,right-left+1);
        }
        return maxi;

        
    }
};