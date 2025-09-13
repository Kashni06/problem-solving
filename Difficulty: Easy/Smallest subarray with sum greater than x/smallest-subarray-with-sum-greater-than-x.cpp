class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int n=arr.size();
        int min_len=n+1;
        int start=0,end=0,currsum=0;
        while(end<n){
            currsum+=arr[end];
            while(currsum>x){
                min_len=min(min_len,end-start+1);
                currsum-=arr[start];
                start++;
            }
            end++;
        }
        if(min_len==n+1) return 0;
        else 
        return min_len;
    }
};