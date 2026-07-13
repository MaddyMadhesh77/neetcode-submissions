class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l =0,r=1,res=0;
        while(r<prices.size()){
            if(prices[l]>=prices[r]){
                l = r;
                r++;
            }
            else{
                int tres = prices[r] - prices[l];
                res = max(res,tres);
                r++;
            }
        }
        return res;
    }
};
