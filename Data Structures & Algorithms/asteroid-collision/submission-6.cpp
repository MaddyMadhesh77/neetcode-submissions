class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        for(int i=0;i<asteroids.size();i++){
            bool valid = true;
            while(valid && !s.empty() && asteroids[i] < 0 && s.top() > 0){
                if(s.top() > -asteroids[i]){
                    valid = false;
                    break;
                }
                else if(s.top() == -asteroids[i]){
                    s.pop();
                    valid = false;
                }
                else{
                    s.pop();
                }
            }
            if(valid) s.push(asteroids[i]);
        }
        vector<int> ans(s.size());
        if(s.empty()) return {};
        for(int i=s.size()-1;i>=0;i--){
            ans[i] = s.top();
            s.pop();
        }
        return ans;
    }
};