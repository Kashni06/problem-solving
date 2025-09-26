// User function Template for C++

class Solution {
  public:
  vector<vector<int>>dp;
int helper(int curr,int spaces,vector<int>&nums,int &k){
    //base case
    if(curr==nums.size()){
        return 0;
    }
    
    if(dp[curr][spaces]!=-1){
        return dp[curr][spaces];
    }
    
    //continue on same line
    int a = INT_MAX;
    int newSpaces = spaces+1+nums[curr];
    if(newSpaces<=k){
        a = helper(curr+1,newSpaces,nums,k);
    }

    //start from new line
    int b = helper(curr+1,nums[curr],nums,k) + (k-spaces)*(k-spaces);

    return dp[curr][spaces] = min(a,b);
}

    int solveWordWrap(vector<int> nums, int k) {
        // Code here
        // Code here
    int n = nums.size();
    dp.resize(n+1,vector<int>(k+1,-1));
    return helper(1,nums[0],nums,k);
        
    }
};