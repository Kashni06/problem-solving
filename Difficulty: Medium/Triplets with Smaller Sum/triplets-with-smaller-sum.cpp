class Solution {

  public:
    long long countTriplets(int n, long long sum, long long arr[]) {
        // Your code goes here
        int count=0;
        sort(arr,arr+n);
        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;
            while(left<right){
                int temp=arr[i]+arr[left]+arr[right];
                if(sum<=temp){
                    right--;
                }
                else{
                    count=count+(right-left);
                    left++;
                }
            }
        }
        return count;
    }
};