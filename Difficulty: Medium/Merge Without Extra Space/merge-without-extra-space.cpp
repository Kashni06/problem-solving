#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        
        int left = n - 1;  // last index of a
        int right = 0;     // first index of b

        // Swap elements if they are out of order
        while (left >= 0 && right < m) {
            if (a[left] > b[right]) {
                swap(a[left], b[right]);
                left--;
                right++;
            } else {
                break;
            }
        }

        // Sort both arrays again
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
    }
};
