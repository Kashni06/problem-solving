#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        unordered_map<long long,int> prefixSumFreq;
        long long prefixSum = 0;
        int count = 0;

        prefixSumFreq[0] = 1;  // important: for subarrays starting at index 0

        for(int num : arr) {
            prefixSum += num;

            // If prefixSum has occurred before, add its frequency to count
            count += prefixSumFreq[prefixSum];

            // Increment the frequency of current prefixSum
            prefixSumFreq[prefixSum]++;
        }

        return count;
    }
};

