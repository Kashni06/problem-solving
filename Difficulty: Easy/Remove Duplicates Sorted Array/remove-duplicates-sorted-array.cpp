class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
       int n=arr.size();
       if(n==0) return arr;
       
       int i=0;
       
       for(int j=0;j<n;j++){
           if(arr[j]!=arr[i]){
               i++;
               arr[i]=arr[j];
           }
       }
        arr.resize(i+1);
        return arr;
    }
};