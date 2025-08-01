
class Solution {
public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        sort(arr.begin(), arr.end()); // Required for two-pointer approach

        int start = 0, end = 1; // Fixed initialization

        while (start < arr.size() && end < arr.size()) {
            if (start != end && arr[end] - arr[start] == x)
                return true;
            else if (arr[end] - arr[start] < x)
                end++;
            else
                start++;
        }
        return false;
    }
};
