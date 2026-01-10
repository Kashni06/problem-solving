class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
       int n1=a.size();
       int n2=b.size();
       unordered_map<int,int>map;
       for(int i=0;i<n1;i++){
           map[a[i]]++;
       }
       int count=0;
       
       for(int j=0;j<n2;j++){
           if(map[b[j]]==1){
               count++;
           }
       }
       return count;
    }
};