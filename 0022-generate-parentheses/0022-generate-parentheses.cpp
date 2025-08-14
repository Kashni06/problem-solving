
class Solution {
public:
    void backtrack(int n, int left, int right, vector<string> &ans, string &temp) {
        if (left + right == 2 * n) {
            ans.push_back(temp);
            return;
        }

        // Add '(' if possible
        if (left < n) {
            temp.push_back('(');
            backtrack(n, left + 1, right, ans, temp);
            temp.pop_back(); // backtrack
        }

        // Add ')' if possible
        if (right < left) {
            temp.push_back(')');
            backtrack(n, left, right + 1, ans, temp);
            temp.pop_back(); // backtrack
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        backtrack(n, 0, 0, ans, temp);
        return ans;
    }
};