class Solution {
  public:

    // Helper function to check if allocation is possible
    bool isPossible(vector<int>& arr, int k, int maxPages) {
        int students = 1;
        int currSum = 0;
        
        for (int pages : arr) {
            if (pages > maxPages) return false; // single book exceeds
            if (currSum + pages <= maxPages) {
                currSum += pages;
            } else {
                students++;
                currSum = pages;
            }
        }
        return students <= k;
    }

    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        if (k > n) return -1; // impossible

        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isPossible(arr, k, mid)) {
                ans = mid;       // valid, try smaller
                high = mid - 1;
            } else {
                low = mid + 1;   // too small, increase
            }
        }

        return ans;
    }
};
