class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
     int n=arr.size();
     int sum=0;
 
     int left=0,right=0;
     for(right=0;right<n;right++){
         sum+=arr[right];
         while(sum>target && left<=right){
             sum-=arr[left++];
         }
         if(sum==target){
             return {left+1,right+1};
         }
     }
     return {-1};
    }
};