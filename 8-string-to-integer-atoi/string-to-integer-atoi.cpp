class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int sign=1;
        long long ans=0;
        int n=s.size();
        while(i<n && s[i]==' '){
            i++;            // to avoid whitespaces
        }  
        if(i<n && s[i]=='-'){
            sign=-1;
            i++;
        }else if(i<n && s[i]=='+'){
            i++;
        }
       while (i < s.size() && isdigit(s[i])) {
         ans = ans * 10 + (s[i] - '0');
         i++;
          if (sign == 1 && ans > INT_MAX) {
                return INT_MAX;
            }

            if (sign == -1 && -ans < INT_MIN) {
                return INT_MIN;
            }
       }
       return ans*sign;
    }
};