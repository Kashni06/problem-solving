class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        stack<int>st;
        //in satck i will store indexes
        for(int i = 0 ; i < arr.size();i++){
            //if(st.empty()) st.push(i);
            
           while(!st.empty() && arr[st.top()]<arr[i]){
               st.pop();
           }
           st.push(i);
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(arr[st.top()]);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};