class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l = 0,r= arr.size()-1;
        vector<int> ans;
        while(r-l!=k-1){
            if(abs(arr[r]-x) > abs(arr[l]-x)){
                r--;
            }
            else if(abs(arr[r]-x) == abs(arr[l]-x)){
                r--;
            }
            else{
                l++;
            }
        }
        while(l<r+1){
            ans.emplace_back(arr[l]);
            l++;
        }
        return ans;
    }
};