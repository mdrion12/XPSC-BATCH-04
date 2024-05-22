#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        vector<int> index(1001, -1); // Index array of size 1001 initialized to -1

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            index[a[i]] = i + 1; // Store 1-based index
        }

        int maximum = -1;
        for (int i = 1; i <= 1000; i++) {
            for (int j = 1; j <= 1000; j++) {
                if (index[i] != -1 && index[j] != -1) { // Check if both elements exist in the array
                    if (__gcd(i, j) == 1) {
                        maximum = max(maximum, index[i] + index[j]);
                    }
                }
            }
        }

        cout << maximum << "\n";
    }
    return 0;
}
