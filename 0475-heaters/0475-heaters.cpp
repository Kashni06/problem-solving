class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());

        int i = 0;  
        int radius = 0;

        for (int house : houses) {
            while (i + 1 < heaters.size() &&
                   abs(heaters[i + 1] - house) <= abs(heaters[i] - house)) {
                i++;
            }

            radius = max(radius, abs(heaters[i] - house));
        }

        return radius;
    }
};
