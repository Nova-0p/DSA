class Solution {
public:

    double helper (double x,long long n,double ans){
            //base case
            if (n==0){
                return ans;
            }
          //odd
            if(n%2!=0){
                return helper(x,n-1,ans*x);
            }

            //even , dont put if odd already checked
           
                return helper(x*x,n/2,ans);
            

    }

    double myPow(double x, int n) {

        // to avoid overflow make long long copy of n
        long long nn=n;
        double ans=1;
        if(nn<0){
            x=1/x;
            nn=-nn;
        }
        
        while(nn>0){
            //odd
            if(nn%2!=0){
                ans=ans*x;
                nn--;
            }

            //even
            if(nn%2==0){
                x=x*x;
                nn=nn/2;
            }
        }
        
        return ans;
    }
};