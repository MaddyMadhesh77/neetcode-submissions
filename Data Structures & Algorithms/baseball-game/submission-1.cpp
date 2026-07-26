class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int ans=0;
        for(auto opr:operations){
            if(opr == "+"){
                int t=0;
                t+=s.top();
                int a = s.top();
                s.pop();
                t+=s.top();
                s.push(a);
                s.push(t);
                ans+=t;
            }
            else if(opr == "C"){
                ans-=s.top();
                s.pop();
            }
            else if(opr == "D"){
                s.push(2*(s.top()));
                ans+=s.top();
            }
            else{
                s.push(stoi(opr));
                ans+=s.top();
            }
        }
        return ans;
    }
};