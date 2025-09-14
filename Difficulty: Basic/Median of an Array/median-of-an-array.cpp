class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
    double ans=0;
        sort(arr.begin(),arr.end());
        int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;
        if(arr.size()%2==0){
           ans=(arr[mid]+arr[mid+1])/2.0;
        }
        else{
            ans=arr[mid];
        }
       return ans;
    }
};