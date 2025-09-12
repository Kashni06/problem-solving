class Solution {
  public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(vector<int>& arr, int k) {
        // Your code here
        int n=arr.size();
        int threshold=n/k;
        unordered_map<int,int>freq  ;
        for(int val:arr){
            freq[val]++;
        }
        int count=0;
        for(auto it:freq){
            if(it.second>threshold){
                count++;
            }
        }
        return count;
    }
};