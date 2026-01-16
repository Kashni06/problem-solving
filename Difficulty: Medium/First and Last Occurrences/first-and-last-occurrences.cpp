class Solution {
public:
    vector<int> find(vector<int>& arr, int x) {
        int start = 0;
        int end = arr.size() - 1;
        int first = -1, last = -1;

        // first occurrence
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == x) {
                first = mid;
                end = mid - 1;   // move left
            }
            else if (arr[mid] < x) {
                start = mid + 1;
            }
            else {
                end = mid - 1;   
            }
        }

        // reset pointers
        start = 0;
        end = arr.size() - 1;

        // last occurrence
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == x) {
                last = mid;
                start = mid + 1; // move right
            }
            else if (arr[mid] < x) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return {first, last};
    }
};
