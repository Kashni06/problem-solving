class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        unordered_map<int,int> freq;
        vector<int> ans;

        for (int num : arr) {
            freq[num]++;
        }

        for (auto &p : freq) {
            if (p.second > 1) {
                ans.push_back(p.first);
            }
        }

        sort(ans.begin(), ans.end()); 
        return ans;
    }
};
