class Solution {
public:
    const long long MOD = 1e9 + 7;
    long long helper (long long x,long long n,long long ans){
            //base case
            if (n==0){
                return ans%MOD;
            }
            if(n%2!=0){
                return helper(x,n-1,(ans*x)%MOD);
            }
            //even , dont put if odd already checked
                return helper((x*x)%MOD,n/2,(ans)%MOD);

    }
    int countGoodNumbers(long long n) {
        long long evenPos=(n+1)/2;
        long long oddPos=(n/2);
        

        long long ans1=helper(5,evenPos,1);
        long long ans2=helper(4,oddPos,1);

        return (ans1*ans2)%MOD;
    }
};