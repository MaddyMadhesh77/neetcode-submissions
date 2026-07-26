class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(int i =0;i<tokens.size();i++){
            if(tokens[i] == "+"){
                float sum = s.top();
                s.pop();
                sum+=s.top();
                s.pop();
                s.push(sum);
            }
            else if(tokens[i] == "-"){
                float diff = s.top();
                s.pop();
                diff = s.top() - diff;
                s.pop();
                s.push(diff);
            }
            else if(tokens[i] == "*"){
                float prod = s.top();
                s.pop();
                prod*=s.top();
                s.pop();
                s.push(prod);
            }
            else if(tokens[i] == "/"){
                float div = s.top();
                s.pop();
                div = s.top() / div;
                s.pop();
                s.push(div);
            }
            else{
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    }
};
