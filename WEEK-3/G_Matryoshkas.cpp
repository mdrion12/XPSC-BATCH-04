#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        map<ll, int> m;
        
        ll maxSize = INT_MIN;
        for (int i = 0; i < n; i++) {
            ll v;
            cin >> v;
            m[v]++;
   
            maxSize = max(maxSize, v);
        }
        int ans = 0;
        for (int i = 1; i <= maxSize; i++) {
            if (m[i] != 0) {
                m[i]--;
                ans++;
                int j = i + 1;
                while (m[j] != 0) {
                    m[j]--;
                    j++;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
