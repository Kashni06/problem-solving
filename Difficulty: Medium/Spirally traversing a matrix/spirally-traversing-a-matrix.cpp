class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        int r = mat.size();
        int c = mat[0].size();
        int rs = 0, cs = 0, re = r - 1, ce = c - 1;
        vector<int> ans;

        while (cs <= ce && rs <= re) {
            // Traverse top row
            for (int col = cs; col <= ce; col++) {
                ans.push_back(mat[rs][col]);
            }
            rs++;

            // Traverse right column
            for (int row = rs; row <= re; row++) {
                ans.push_back(mat[row][ce]);
            }
            ce--;

            // Traverse bottom row (if still valid)
            if (rs <= re) {
                for (int col = ce; col >= cs; col--) {
                    ans.push_back(mat[re][col]);
                }
                re--;
            }

            // Traverse left column (if still valid)
            if (cs <= ce) {
                for (int row = re; row >= rs; row--) {
                    ans.push_back(mat[row][cs]);
                }
                cs++;
            }
        }

        return ans;
    }
};
