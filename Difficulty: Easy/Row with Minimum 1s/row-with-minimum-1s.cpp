class Solution {
  public:
    int minRow(vector<vector<int>> &mat) {
        // code here
       int min_ind=0;
       int min_one=INT_MAX;
       for(int i=0;i<mat.size();i++){
           int one=count(mat[i].begin(),mat[i].end(),1);
           if(min_one>one){
               min_one=one;
               min_ind=i;
           }
       }
       return min_ind+1;
    }
};