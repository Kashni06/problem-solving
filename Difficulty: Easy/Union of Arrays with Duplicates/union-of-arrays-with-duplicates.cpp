class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
          set<int> s;

        for (int x : a) s.insert(x);
        for (int y : b) s.insert(y);

        vector<int> ans(s.begin(), s.end());
        return ans;
    }
};