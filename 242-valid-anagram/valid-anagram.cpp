class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
         int hash[26]={0};
      for(int i=0;i<t.size();i++){
        hash[t[i]-'a']++;
      }
      for(int j=0;j<s.size();j++){
        if(hash[s[j]-'a']==0){
            return false;
        }
        hash[s[j]-'a']--;
      }
return true;
    }
};