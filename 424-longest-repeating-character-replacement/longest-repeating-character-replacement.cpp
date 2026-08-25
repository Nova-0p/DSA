class Solution {
public:
    int characterReplacement(string s, int k) {
        int hash[26]={0};
        int left=0;
        int maxi=0;
        int maxf=0;

        for(int right=0;right<s.size();right++){
            hash[s[right]-'A']++;
            maxf=max(maxf,hash[s[right]-'A']);

            while((right-left+1)-maxf>k){
                hash[s[left]-'A']--;
                left++;
                maxf=0;
                for(int i=0;i<26;i++){
                    maxf=max(hash[i],maxf);
                }
            }
             maxi=max(maxi,right-left+1);
            
        }
        return maxi;
        
    }
};