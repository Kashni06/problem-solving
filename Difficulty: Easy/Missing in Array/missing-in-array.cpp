class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n=arr.size()+1; // Elements in array is one less so size is one less
        //Sum of n numbers
        long long sum1=0;
        int sum=(n * (n + 1)) / 2;
        //Sum of array elements
        for(int i=0;i<n-1;i++){
            sum1+=arr[i];
        }
        long long ans=sum-sum1;
        return ans;
    }
};