class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int n=arr.size();
        int currMax=arr[0];
        int currMin=arr[0];
        int globalMax=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]<0){
                swap(currMin,currMax);
            }
            currMax=max(arr[i],currMax*arr[i]);
            currMin=min(arr[i],currMin*arr[i]);
            globalMax=max(globalMax,currMax);
        }
        return globalMax;
    }
};