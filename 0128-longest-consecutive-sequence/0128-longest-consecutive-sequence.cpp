class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if (nums.empty()) return 0;

        unordered_set<int> numSet(nums.begin(), nums.end()); // unique values
        int longest = 0;

        for (int num : numSet) {   // iterate over set (not nums)
            // check if it's start of a sequence
            if (numSet.find(num - 1) == numSet.end()) {
                int curr = num;
                int length = 1;

                while (numSet.find(curr + 1) != numSet.end()) {
                    curr++;
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
    
};