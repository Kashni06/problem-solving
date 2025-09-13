class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int left=0,right=arr.size()-1;
        int leftMax=0;
        int rightMax=0;
        int count=0;
        while(left<right){
            leftMax=max(leftMax,arr[left]);
            rightMax=max(rightMax,arr[right]);
            if(leftMax<rightMax){
                count+=leftMax-arr[left];
                left++;
            }
            else{
                count+=rightMax-arr[right];
                right--;
            }
        }
        return count;
    }
};