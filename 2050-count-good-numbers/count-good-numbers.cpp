class Solution {
public:
    const long long MOD = 1e9 + 7;

    long long po(long long x, long long n) {
        
        // Base case
        if (n == 0) {
            return 1;
        }

        long long half = po(x, n / 2);

        if (n % 2 == 0) {
            return (half * half) % MOD;
        }

        return (x * half % MOD * half) % MOD;
    }

    int countGoodNumbers(long long n) {
        
        long long evenPos = (n + 1) / 2;
        long long oddPos = n / 2;

        long long ans1 = po(5, evenPos);
        long long ans2 = po(4, oddPos);

        return (ans1 * ans2) % MOD;
    }
};