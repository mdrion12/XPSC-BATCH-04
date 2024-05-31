#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int maxLength = 0;

        // Check all subarrays
        for (int i = 0; i < n; i++) {
            int currentSum = 0;
            for (int j = i; j < n; j++) {
                currentSum += v[j];
                if (currentSum % 2 == 0) {
                    maxLength = max(maxLength, j - i + 1);
                }
            }
        }

        cout << maxLength << "\n";
    }

    return 0;
}
