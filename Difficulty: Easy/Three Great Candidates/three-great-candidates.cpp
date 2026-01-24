// User function template for C++

class Solution {
  public:
    int maxProduct(vector<int> arr) {
        // code here
       int n=arr.size();
       
     sort(arr.begin(),arr.end());
           int case1=arr[n-1]*arr[n-2]*arr[n-3];
           int case2=arr[0]*arr[1]*arr[n-1];
           return max(case1,case2);
       
      
    }
};