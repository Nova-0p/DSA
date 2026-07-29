class Solution {
public:
    bool isPalindrome(string s) {
        if(s==" "){
            return true;
            }

        int st=0;
        int l=s.size()-1;

        while(st<=l){
            if(!isalnum(s[st])){
                st++;
                continue;
            }
             if(!isalnum(s[l])){
                l--;
                continue;
            }
            if(s[st]>='A'&&s[st]<='Z'){
                s[st]+=32;
            }
            if(s[l]>='A'&&s[l]<='Z'){
                s[l]+=32;
            }
            if(s[st]!=s[l]){
                return false;
            }
            
                st++;
                l--;
            

            
        }
       return true;
    }
};