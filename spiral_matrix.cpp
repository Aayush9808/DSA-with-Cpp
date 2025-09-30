class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int size = m * n;
        vector<int> ans;
        int strow = 0;
        int endrow = m - 1;
        int stcol = 0;
        int endcol = n - 1;
        int count = 0;
        while (count < size) {
            for (int i = stcol; i <= endcol && count < size; i++) {
                ans.push_back(matrix[strow][i]);
                count++;
            }
            strow++;
            for (int i = strow; i <= endrow && count < size; i++) {
                ans.push_back(matrix[i][endcol]);
                count++;
            }
            endcol--;
            for (int i = endcol; i >= stcol && count < size; i--) {
                ans.push_back(matrix[endrow][i]);
                count++;
            }
            endrow--;
            for (int i = endrow; i >= strow && count < size; i--) {
                ans.push_back(matrix[i][stcol]);
                count++;
            }
            stcol++;
        }
        return ans;
    }
};
