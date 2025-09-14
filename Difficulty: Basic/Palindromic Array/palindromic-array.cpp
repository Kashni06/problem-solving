/*Complete the function below*/
bool ispalindrome(int num){
    int original = num,rev = 0;
    
    while (num> 0){
        rev = rev *10 +(num % 10);
        
        num /=10;
    }
    
    return rev == original;
}


class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        for (int i = 0; i < arr.size();i++){
            if (!ispalindrome(arr.at(i))){
                return false;
            }
        }
        
        return true;
        
    }

};