#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        vector<int> v(a + 1);
        for (int i = 1; i <= a; i++) {
            cin >> v[i];
        }

        vector<int> pref(a);
        int sum = 0, ans = 0;
        for (int i = 1; i < a; i++) { // Changed from i <= a to i < a to prevent out-of-bounds
            pref[i] = abs(v[i] - v[i + 1]);
            sum += pref[i];
        }
        ans = sum;

        for (int i = 1; i <= a; i++) {
            int current_sum = sum; // Create a separate variable to hold current sum changes
            if (i == 1) {
                // Adjust for first element
                current_sum -= pref[i];
                current_sum += abs(1 - v[i + 1]);
                ans = max(ans, current_sum);

                current_sum = sum - pref[i];
                current_sum += abs(b - v[i + 1]);
                ans = max(ans, current_sum);
            } else if (i == a) {
                // Adjust for last element
                current_sum -= pref[i - 1];
                current_sum += abs(1 - v[i - 1]);
                ans = max(ans, current_sum);

                current_sum = sum - pref[i - 1];
                current_sum += abs(b - v[i - 1]);
                ans = max(ans, current_sum);
            } else {
                // Adjust for middle elements
                current_sum -= (pref[i - 1] + pref[i]);
                current_sum += abs(1 - v[i - 1]) + abs(1 - v[i + 1]);
                ans = max(ans, current_sum);

                current_sum = sum - (pref[i - 1] + pref[i]);
                current_sum += abs(b - v[i - 1]) + abs(b - v[i + 1]);
                ans = max(ans, current_sum);
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
