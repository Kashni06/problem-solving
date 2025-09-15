class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        int R = mat.size();
        int C = mat[0].size();

        int low = INT_MAX, high = INT_MIN;

        // Find global min and max
        for (int i = 0; i < R; i++) {
            low = std::min(low, mat[i][0]);
            high = std::max(high, mat[i][C-1]);
        }

        int desired = (R * C + 1) / 2; // position of median

        while (low < high) {
            int mid = low + (high - low) / 2;
            int freq = 0;

            // count how many numbers <= mid
            for (int i = 0; i < R; i++) {
                freq += upper_bound(mat[i].begin(), mat[i].end(), mid) - mat[i].begin();
            }

            if (freq < desired) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        return low;
    }
};
