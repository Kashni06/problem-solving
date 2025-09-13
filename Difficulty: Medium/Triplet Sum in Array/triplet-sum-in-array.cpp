class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
       sort(arr.begin(),arr.end());
       int n=arr.size();
       for(int i=0;i<n-2;i++){
           int left=i+1,right=n-1;
           while(left<right){
               int currSum=arr[i]+arr[left]+arr[right];
               if(currSum==target){
                   return true;
               }
               else if(currSum<target)
               left++;
               else right--;
           }
       }
       return false;
        
    }
};