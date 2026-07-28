class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> ans(temp.size(),0);
        stack<int> s;
        s.push(temp.size()-1);
        ans[temp.size()-1] = 0;
        for(int i=temp.size()-2;i>=0;i--){
            while(!s.empty() && temp[s.top()]<=temp[i]){
                s.pop();
            }
            if(s.empty()){
                s.push(i);
                ans[i] = 0;
                continue;
            }
            ans[i] = s.top()-i;
            s.push(i);
        }
        return ans;
    }
};
