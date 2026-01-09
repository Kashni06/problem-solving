class Solution {
public:
    int thirdLargest(vector<int> &arr) {
        int n = arr.size();
        if (n < 3) return -1;

        int largest = INT_MIN;
        int secondLargest = INT_MIN;
        int thirdLargest = INT_MIN;

        for (int i = 0; i < n; i++) {
            int x = arr[i];

            if (x >= largest) {
                thirdLargest = secondLargest;
                secondLargest = largest;
                largest = x;
            }
            else if (x >= secondLargest) {
                thirdLargest = secondLargest;
                secondLargest = x;
            }
            else if (x >= thirdLargest) {
                thirdLargest = x;
            }
        }

        return thirdLargest;
    }
};
