class Solution {
  public:
    string rearrangeString(string s) {
        int n = s.size();
        unordered_map<char, int> freq;

        // Step 1: Count frequency of each character
        for (char c : s) {
            freq[c]++;
        }

        // Step 2: Check impossible case
        int maxFreq = 0;
        for (auto &it : freq) {
            maxFreq = max(maxFreq, it.second);
        }
        if (maxFreq > (n + 1) / 2) {
            return ""; // not possible
        }

        // Step 3: Max heap {frequency, character}
        priority_queue<pair<int, char>> pq;
        for (auto &it : freq) {
            pq.push({it.second, it.first});
        }

        // Step 4: Build the result
        string result = "";
        pair<int, char> prev = {0, '#'}; // to store last used char

        while (!pq.empty()) {
            auto [count, ch] = pq.top();
            pq.pop();

            result.push_back(ch);

            // If previous char still has remaining count, push it back
            if (prev.first > 0) {
                pq.push(prev);
            }

            // Update prev with current char (decremented count)
            prev = {count - 1, ch};
        }

        return result;
    }
};
