// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>res(n,1);
        for(int i=1;i<n;i++){
            res[i]=res[i-1]*arr[i-1];
            
        }
        int suffix=1;
        for(int i=n-1;i>=0;i--){
            res[i]*=suffix;
            suffix*=arr[i];
        }
        return res;
    }
};
