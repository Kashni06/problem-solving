class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
      int maxi = *max_element(arr.begin(), arr.end());
      return maxi;
    }
};