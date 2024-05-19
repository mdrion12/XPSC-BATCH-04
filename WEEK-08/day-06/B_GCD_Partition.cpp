#include <bits/stdc++.h>
using namespace std;

// Function to compute GCD of two numbers
// int gcd(int a, int b) {
//     while (b) {
//         a %= b;
//         swap(a, b);
//     }
//     return a;
// }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Calculate prefix sums
        vector<long long> pref(n);
        pref[0] = a[0];
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + a[i];
        }
        
        // Initialize answer
        long long ans = 0;
        
        // Check every possible prefix length from 1 to n-1
        for (int i = 0; i < n - 1; i++) {

            long long sum1 = pref[i];
            long long sum2 = pref[n - 1] - pref[i];
            ans = max(ans,__gcd(sum1, sum2));
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
