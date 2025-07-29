class Solution {
  public:
    int missingNum(vector<int>& arr) {
      
       long long n=arr.size()+1;
      long long sum=0;
      for(int i=0;i<n-1;i++){
          sum+=arr[i];
      }
      sum=n*(n+1)/2-sum;
      return sum;
       
    }
};