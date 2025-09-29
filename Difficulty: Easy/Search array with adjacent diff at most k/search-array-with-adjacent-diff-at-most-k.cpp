// x is the element to be searched in arr[0..n-1]
// such that all elements differ by at-most k.

class Solution {
  public:
    int findStepKeyIndex(vector<int>& arr, int k, int x) {
        // code here
        int n=arr.size();
        int i=0;
        while(i<n){
            if(arr[i]==x) return i;
            int diff=abs(arr[i]-x);
            int steps=max(1,diff/k);
            i+=steps;
        }
        return -1;
    }
};