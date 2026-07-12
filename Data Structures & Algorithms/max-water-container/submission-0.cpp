class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0,r = heights.size()-1;
        int area = 0,tarea = 0;
        while(l<r){
            if(heights[l]<heights[r]){
                tarea = (r-l)*min(heights[l],heights[r]);
                area = max(area,tarea);
                l++;
            }
            else{
                tarea = (r-l)*min(heights[l],heights[r]);
                area = max(area,tarea);
                r--;
            }
        }
        return area;
    }
};
