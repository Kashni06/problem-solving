#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& arr) {
        if (arr.size() == 1) {
            return arr[0];
        }
        
        int n = arr.size();
        map<int, int> mpp;
        
        for (int i = 0; i < n; i++) {
            mpp[arr[i]]++;
        }
        
        for (auto i : mpp) {
            if (i.second > n / 2) {
                return i.first;
            }
        }
        
        return -1; // moved outside the loop
    }
};
