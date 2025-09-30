class Solution {
  public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        vector<vector<int>> result;
        int n = arr.size();
        sort(arr.begin(), arr.end());

        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && arr[i] == arr[i - 1]) continue; // skip duplicates for i

            for (int j = i + 1; j < n - 2; j++) {  // ✅ fix: j starts at i+1
                if (j > i + 1 && arr[j] == arr[j - 1]) continue; // skip duplicates for j

                int left = j + 1, right = n - 1;

                while (left < right) {
                    long long sum = (long long)arr[i] + arr[j] + arr[left] + arr[right];

                    if (sum == target) {
                        result.push_back({arr[i], arr[j], arr[left], arr[right]});

                        while (left < right && arr[left] == arr[left + 1]) left++;
                        while (left < right && arr[right] == arr[right - 1]) right--;

                        left++;
                        right--;
                    }
                    else if (sum < target) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }
        }
        return result;
    }
};
