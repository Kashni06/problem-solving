class Solution {
  public:
    vector<int> remDuplicate(vector<int>& arr) {
        // code here
        vector<int>ans;
        int n=arr.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            if(m[arr[i]]==0){
                ans.push_back(arr[i]);
                m[arr[i]]=1;
            }
        }
        return ans;
    }
};