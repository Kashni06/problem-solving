class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        //TWO POINTERS APPROACH -> firslty sort both arrays greed factor and cookie size
        // then using two pointer one on geed factor and other for cookie size if it satisfy the condition then move ahead both pointers meand child will be satified and count will be increase if not only j will be increment and then return i 
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int i=0;
        int j=0;
        int n=g.size();
        int m=s.size();
        while(i<n && j<m){
            if(s[j]>=g[i]){
                i++;
                j++;
            }
            else {
                j++;
            }
        }
        return i;
    }
};