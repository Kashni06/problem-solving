class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        vector<int>val;
        map<int,int>map;
        for(int i=0;i<arr.size();i++){
            map[arr[i]]++;
        }
        for(int i=1;i<=arr.size();i++){
            val.push_back(map[i]);
        }
        return val;
    }
};
