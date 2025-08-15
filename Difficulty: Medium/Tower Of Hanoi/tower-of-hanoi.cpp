class Solution {
public:
    void tohCal(int n, int sour, int help, int dest) {
        if (n == 1) { 
      
            return;
        }
        tohCal(n - 1, sour, dest, help);
       
        tohCal(n - 1, help, sour, dest);
    }

    int towerOfHanoi(int n, int from, int to, int aux) {
        tohCal(n, from, aux, to);
        return (1 << n) - 1; // faster & avoids floating point pow()
    }
};
