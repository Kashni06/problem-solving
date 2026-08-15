class Solution {
    int sumOfSeries(int n) {
        // code here
       int i=1;
       int sum=0;
       while(i<=n){
           sum+=i*i*i;
           i++;
       }
       return sum;
    }
}