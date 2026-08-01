class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int l = 1, r = *max_element(piles.begin(),piles.end());
        int ans = -1;

        while (l <= r) {
            int m = l + ((r - l) / 2);
            long long cnt=0;
            int c=0;
            while(c<piles.size()){
                int sum = ceil((double)piles[c]/m);
                if(sum<=1){
                    cnt++;
                    c++;
                }
                else{
                    cnt+=sum;
                    c++;
                }
            }

            if (cnt <= h) {
                ans = m;
                r = m - 1;
            } else if (cnt > h) {
                l = m + 1;
            }
        }
        return ans;
    }
};
