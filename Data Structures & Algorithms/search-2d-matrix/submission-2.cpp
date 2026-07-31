class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();       
        int cols = matrix[0].size();

        int l = 0, r = rows*cols-1;

        while (l <= r) {
            int m = l + ((r - l) / 2);
            int x = m / cols;
            int y = m % cols;
            if (matrix[x][y] > target) {
                r = m - 1;
            } else if (matrix[x][y] < target) {
                l = m + 1;
            } else {
                return true;
            }
        }
        return false;
    }
};
