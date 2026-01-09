class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        unordered_map<int,int>map1;
        unordered_map<int,int>map2;
        
        for(int i=0;i<a.size();i++){
            map1[a[i]]++;
        }
        for(int i=0;i<b.size();i++){
            map2[b[i]]++;
        }
        return map1==map2;
    }
};