class Solution {
public:
    int countTriplet(vector<int>& arr) {
        int n = arr.size();
        int count = 0;

        sort(arr.begin(), arr.end());

        for (int k = n - 1; k >= 2; k--) {
            int left = 0;
            int right = k - 1;

            while (left < right) {
                int sum = arr[left] + arr[right];

                if (sum == arr[k]) {
                    count++;
                    left++;
                    right--;
                }
                else if (sum < arr[k]) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }
        return count;
    }
};
