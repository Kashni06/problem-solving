class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        // Code here
        unordered_map<int,int>index;
        int maxdist=0;
        
        for(int i=0;i<arr.size();i++){
            if(index.find(arr[i])==index.end()){
                index[arr[i]]=i;
            }
            else{
                maxdist=max(maxdist,i-index[arr[i]]);
            }
            
        }
        return maxdist;
    }
};