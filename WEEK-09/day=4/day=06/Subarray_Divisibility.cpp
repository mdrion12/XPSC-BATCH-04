#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    map<ll, ll> mp;
    ll ans = 0;

    // Initialize the map with 0 as a key to count subarrays that start from the beginning
    mp[0] = 1;
    ll sum = 0;

    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        sum += v;
        ll result = sum % n;

        // Adjust for negative mod results
        if (result < 0) {
            result += n;
        }

        // If result is already in map, add its count to answer
        if (mp.find(result) != mp.end()) {
            ans += mp[result];
        }

        // Increment the count of this result in the map
        mp[result]++;
    }

    cout << ans << "\n";
    return 0;
}
