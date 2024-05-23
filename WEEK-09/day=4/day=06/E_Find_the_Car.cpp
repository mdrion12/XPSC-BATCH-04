#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> a(k), b(k);
        
        for (int i = 0; i < k; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < k; ++i) {
            cin >> b[i];
        }

        while (q--) {
            int d;
            cin >> d;
            if (d == 0) {
                cout << "0\n";
                continue;
            }
            
            auto it = lower_bound(a.begin(), a.end(), d);
            if (it != a.end() && *it == d) {
                int idx = it - a.begin();
                cout << b[idx] << "\n";
            } else {
                int idx = it - a.begin();
                if (it == a.begin()) {
                    cout << "Query point is out of bounds\n";
                    continue;
                }
                if (it == a.end()) {
                    idx = k; // Out of bounds, handled here
                }

                int idx1 = idx - 1;
                double up = a[idx] - a[idx1];
                double dw = b[idx] - b[idx1];
                double speed = dw / up;
                double result = b[idx1] + speed * (d - a[idx1]);
                cout << static_cast<int>(result) << "\n";
            }
        }
    }
    return 0;
}
