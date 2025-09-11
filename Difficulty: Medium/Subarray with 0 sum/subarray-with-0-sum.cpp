class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
     unordered_set<int>seen;
     int currSum=0;
     for(int val:arr){
         currSum+=val;
         if(currSum==0 || seen.count(currSum)){
             return true;
             
         }
         seen.insert(currSum);
     }
     return false;
    }
};