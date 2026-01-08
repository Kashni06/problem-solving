class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int rev=0;
        while(n>0){
            int digit=n%10;
            n=n/10;
            rev=rev*10 + digit;
        }
        return rev;
    }
};