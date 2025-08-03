class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& matrix) {
      int n = matrix.size();

      // Column-wise reverse
      for (int j = 0; j < n; j++) {
          int start = 0; int end = n - 1; 
          while (start < end) {      
              swap(matrix[start][j], matrix[end][j]);
              start++; end--;
          }
      }

      // Row-wise reverse
      for (int i = 0; i < n; i++) {
          int start = 0, end = n - 1;
          while (start < end) {
              swap(matrix[i][start], matrix[i][end]);
              start++; end--;
          }
      }
    }
};
