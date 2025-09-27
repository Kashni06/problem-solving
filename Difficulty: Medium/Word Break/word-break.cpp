class Solution {
  public:
    bool solve(string &s, set<string>& st, int i, vector<int>& dp) {
        if (i == s.size()) return true;  // reached end
        if (dp[i] != -1) return dp[i];

        string temp = "";
        for (int j = i; j < s.size(); j++) {   // start from i
            temp += s[j];                      // build substring from i
            if (st.find(temp) != st.end()) {
                if (solve(s, st, j + 1, dp)) 
                    return dp[i] = 1;
            }
        }
        return dp[i] = 0;
    }

    bool wordBreak(string &s, vector<string> &dictionary) {
        int n = s.size();
        set<string> st(dictionary.begin(), dictionary.end());
        vector<int> dp(n, -1);
        return solve(s, st, 0, dp);
    }
};
