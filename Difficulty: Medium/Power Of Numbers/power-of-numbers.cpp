class Solution {
  public:
    int reverseNum(int n) {
        int rev = 0;
        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        return rev;
    }

    long long power(int base, int exp) {
        long long result = 1;
        long long b = base; 
        while (exp > 0) {
            if (exp % 2 == 1) {
                result *= b;
            }
            b *= b;     
            exp /= 2;  
        }
        return result;
    }

    int reverseExponentiation(int n) {
        int rev = reverseNum(n);
        return (int) power(n, rev);
    }
};
