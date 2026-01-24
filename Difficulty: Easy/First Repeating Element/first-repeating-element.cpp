class Solution {
public:
    int firstRepeated(vector<int> &arr) {
        unordered_set<int> seen;
        int ans = -1;

        for (int i = arr.size() - 1; i >= 0; i--) {
            if (seen.count(arr[i])) {
                ans = i + 1; // 1-based index
            } else {
                seen.insert(arr[i]);
            }
        }
        return ans;
    }
};
