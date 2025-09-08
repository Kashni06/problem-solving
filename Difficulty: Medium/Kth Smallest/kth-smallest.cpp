// User function template for C++
class Solution {
  public:
    int partition(vector<int>& arr, int l, int r) {
        int pivot = arr[r];
        int i = l;
        for (int j = l; j < r; j++) {
            if (arr[j] <= pivot) {
                swap(arr[i], arr[j]);
                i++;
            }
        }
        swap(arr[i], arr[r]);
        return i; // pivot index
    }

    int quickSelect(vector<int>& arr, int l, int r, int k) {
        if (l <= r) {
            int pi = partition(arr, l, r);

            if (pi == k - 1) 
                return arr[pi];                  // found kth smallest
            else if (pi > k - 1) 
                return quickSelect(arr, l, pi - 1, k); // search left
            else 
                return quickSelect(arr, pi + 1, r, k); // search right
        }
        return -1; // should not reach here normally
    }

    int kthSmallest(vector<int> &arr, int k) {
        return quickSelect(arr, 0, arr.size() - 1, k);
    }
};
