class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end()), r = accumulate(weights.begin(), weights.end(), 0);
        int ans = -1;

        while (l <= r) {
            int m = l + ((r - l) / 2);
            int d = 1;
            int sum = 0;
            for (int w : weights) {
                if (sum + w > m) {
                    d++;
                    sum = w;
                } else {
                    sum += w;
                }
            }

            if (d <= days) {
                ans = m;
                r = m - 1;
            } else{
                l = m + 1;
            }
        }
        return ans;
    }
};