class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        int first = -1, last = -1;

        // Find first occurrence
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                first = mid;
                end = mid - 1;
            }
            else if (nums[mid] < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        start = 0;
        end = nums.size() - 1;

        // Find last occurrence (same logic, small change)
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                last = mid;
                start = mid + 1;
            }
            else if (nums[mid] < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return {first, last};
    }
};
