// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        vector<vector<int>> result;
        sort(arr.begin(), arr.end());  // important!

        int left = 0, right = arr.size() - 1;

        while (left < right) {
            int sum = arr[left] + arr[right];

            if (sum == 0) {
                result.push_back({arr[left], arr[right]});
                //skip duplicates
               int lval=arr[left],rval=arr[right];
               while(left<right && arr[left]==lval) left++;
               while(left<right && arr[right]==rval) right--;
            } 
           
            else if (sum < 0) {
                left++;   // need bigger value
            } 
            else {
                right--;  // need smaller value
            }
        }
        return result;
    }
};
