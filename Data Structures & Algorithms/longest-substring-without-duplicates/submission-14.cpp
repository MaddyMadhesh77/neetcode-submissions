class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,res=0,tres=0;
        unordered_map<char,int> mpp;
        while(r<s.size()){
            if(mpp.find(s[r]) == mpp.end()){
                mpp[s[r]] = r;
                r++;
                tres++;
            }
            else{
                res = max(res,tres);
                l=max(l,mpp.find(s[r])->second+1);
                mpp[s[r]] = r;
                tres=r-l+1;r++;
            }
        }
        res = max(res,tres);
        return res;
    }
};
