class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int start = 0, end = nums.size() - 1;
        int ans = nums.size();   // default position if target is bigger than all

        while(start <= end){
            int mid = start + (end - start) / 2;

            if(nums[mid] == target) {
                return mid;      // found exact position
            }
            else if(nums[mid] > target){
                ans = mid;       // possible insert position
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;  // insert position
    }
};
