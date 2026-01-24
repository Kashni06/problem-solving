class Solution {
  public:
    vector<pair<int, int>> allPairs(int target, vector<int> &arr1, vector<int> &arr2) {

        unordered_map<int,int> freq;
        vector<pair<int,int>> result;

        // count frequency of arr2 elements
        for (int x : arr2) {
            freq[x]++;
        }

        sort(arr1.begin(), arr1.end());

        // check for each element in arr1
        for (int x : arr1) {
            int need = target - x;
            if (freq.count(need)) {
                for (int k = 0; k < freq[need]; k++) {
                    result.push_back({x, need});
                }
            }
        }

        return result;
    }
};
