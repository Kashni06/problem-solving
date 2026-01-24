class Solution {
public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        int floorVal = -1, ceilVal = -1;

        for (int i = 0; i < arr.size(); i++) {
            
            if (arr[i] <= x) {
                if (floorVal == -1 || arr[i] > floorVal)
                    floorVal = arr[i];
            }

            
            if (arr[i] >= x) {
                if (ceilVal == -1 || arr[i] < ceilVal)
                    ceilVal = arr[i];
            }
        }

        return {floorVal, ceilVal};
    }
};
