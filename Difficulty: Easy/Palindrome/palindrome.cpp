class Solution {
  public:
    bool isPalindrome(int n) {
        // code here.
    int original=n;
    int digits=0;
    int rev=0;
    while(n>0){
        int digits=n%10;
        n=n/10;
        rev=rev*10+digits;
    }
       return rev==original;
    
    }
};