// User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        vector<bool> visited(leaves + 1, false);
        vector<bool> used(leaves + 1, false); // to skip duplicate jumps

        for (int i = 0; i < N; i++) {
            int jump = frogs[i];

            // If jump is 1 → all leaves visited
            if (jump == 1)
                return 0;

            // Skip if jump already processed or useless
            if (jump > leaves || used[jump])
                continue;

            used[jump] = true;

            // Mark multiples
            for (int j = jump; j <= leaves; j += jump) {
                visited[j] = true;
            }
        }

        int count = 0;
        for (int i = 1; i <= leaves; i++) {
            if (!visited[i])
                count++;
        }

        return count;
    }
};
