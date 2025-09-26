class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        if (s1.length() != s2.length()) 
            return false;

        // Concatenate s1 with itself
        string temp = s1 + s1;

        // If s2 is a substring of temp, then it's a rotation
        return temp.find(s2) != string::npos;
    }
};