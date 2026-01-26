class Solution {
public:
    int countPairs(vector<int> &arr, int target) {
        unordered_map<int,int> freq;
        int count = 0;

        for (int num : arr) {
            int need = target - num;
            if (freq[need] > 0) {
                count += freq[need];
            }
            freq[num]++;
        }
        return count;
    }
};
