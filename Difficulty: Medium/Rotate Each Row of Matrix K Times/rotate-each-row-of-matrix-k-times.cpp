class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        int row = mat.size();
        int col = mat[0].size();
        
        k = k % col;  // handle large k
        
        for (int i = 0; i < row; i++) {
            // Reverse first k elements
            reverse(mat[i].begin(), mat[i].begin() + k);
            
            // Reverse remaining elements
            reverse(mat[i].begin() + k, mat[i].end());
            
            // Reverse entire row
            reverse(mat[i].begin(), mat[i].end());
        }
        
        return mat;
    }
};
