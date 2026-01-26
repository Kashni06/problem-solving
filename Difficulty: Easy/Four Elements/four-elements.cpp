#include <algorithm>
using namespace std;

bool find4Numbers(int A[], int n, int X) {
    sort(A, A + n);

    for (int i = 0; i < n - 3; i++) {
        for (int j = i + 1; j < n - 2; j++) {

            int left = j + 1;
            int right = n - 1;

            while (left < right) {
                long long sum = (long long)A[i] + A[j] + A[left] + A[right];

                if (sum == X) {
                    return true;
                }
                else if (sum < X) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }
    }
    return false;
}
