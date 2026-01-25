// User function template for C++

class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        int ans = 0;

        for (int i = 0; i < arr.size(); i++) {
            ans += (arr[i] + k - 1) / k;  // ceil(arr[i] / k)
        }

        return ans;
    }
};
