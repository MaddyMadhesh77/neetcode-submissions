class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i] == ']'){
                string sc;
                while(!st.empty() && st.top() != '['){
                    sc+=st.top();
                    st.pop();
                }
                st.pop();
                reverse(sc.begin(),sc.end());
                string ss;
                while (!st.empty() && isdigit(st.top())){
                    ss+=st.top();
                    st.pop();
                }
                reverse(ss.begin(),ss.end());
                string final;
                int count = stoi(ss);
                for (int i = 0; i < count; i++) {
                    final += sc;
                }
                for(int i=0;i<final.size();i++){
                    st.push(final[i]);
                }
            }
            else st.push(s[i]);
        }
        string ans;
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;  
    }
};