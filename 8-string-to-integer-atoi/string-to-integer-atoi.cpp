class Solution {
public:

    int helper(int n,string s,int i,long long ans,int sign){
        if(i==n || s[i] < '0' || s[i] > '9'){
            //base case
            return sign*ans;
        }

        int digit=s[i]-'0';
        ans=ans*10+digit;
       
    
    if (sign * ans <= INT_MIN) return INT_MIN;
    if (sign * ans >= INT_MAX) return INT_MAX;

             return helper(n,s,i+1,ans,sign);
}
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
        } // sign handling

        ///  string to digit also recursively using helper func

       /* while (i < s.size() && isdigit(s[i])) {
         ans = ans * 10 + (s[i] - '0');
         i++;
          if (sign == 1 && ans > INT_MAX) {
                return INT_MAX;
            }

            if (sign == -1 && -ans < INT_MIN) {
                return INT_MIN;
            }
       }
       return ans*sign; */
    ans=helper(n,s,i,0,sign);

  
 
 return ans;


    }
};