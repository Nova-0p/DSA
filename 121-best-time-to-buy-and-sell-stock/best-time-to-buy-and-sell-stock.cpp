class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int best=0;
        for(int i=0;i<prices.size();i++){
            if(buy>prices[i]){
                buy=prices[i];
            }
            if(prices[i]-buy>best){
                best=prices[i]-buy;
            }
        }
        return best;
    }
};