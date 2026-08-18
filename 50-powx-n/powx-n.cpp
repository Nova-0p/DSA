class Solution {
public:

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