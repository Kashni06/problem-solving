class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
     unordered_map<int,int>freq;
     for(int val:a){
         freq[val]++;
         
     }
     for(int val:b){
         if(freq[val]>0){
             freq[val]--;
         }
         else{
             return false;
         }
     }
     return true;
    }
};