class Solution {
  public:
    string multiplyStrings(string &s1, string &s2) {
        // code here
      int sign = 1;
        if (s1[0] == '-') { sign *= -1; s1 = s1.substr(1); }
        if (s2[0] == '-') { sign *= -1; s2 = s2.substr(1); }

        int n = s1.size(), m = s2.size();
        vector<int> res(n + m, 0);

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = (s1[i] - '0') * (s2[j] - '0');
                int sum = mul + res[i + j + 1];
                res[i + j + 1] = sum % 10;
                res[i + j] += sum / 10;
            }
        }

        string result = "";
        for (int num : res) {
            if (!(result.empty() && num == 0))
                result.push_back(num + '0');
        }

        if (result.empty()) return "0";
        if (sign == -1) result = "-" + result;
        return result;
    }
};