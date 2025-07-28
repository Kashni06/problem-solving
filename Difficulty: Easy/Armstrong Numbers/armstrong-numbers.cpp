// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int original = n;
        int count = 0;

        // Step 1: Count number of digits
        int temp = n;
        while (temp) {
            count++;
            temp /= 10;
        }

        // Step 2: Calculate sum of digits raised to count
        int ans = 0;
        temp = n;
        while (temp) {
            int rem = temp % 10;
            ans += pow(rem, count);
            temp /= 10;
        }

        // Step 3: Compare with original number
        return ans == original;
    }
};
