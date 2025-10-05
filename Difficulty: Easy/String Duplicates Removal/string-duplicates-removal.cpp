// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
      string result = "";
        unordered_set<char> seen;
        for (char c : s) {
            if (seen.find(c) == seen.end()) {
                result.push_back(c);
                seen.insert(c);
            }
        }
        return result;
    }
};