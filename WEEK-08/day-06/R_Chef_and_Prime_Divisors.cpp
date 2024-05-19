#include <bits/stdc++.h>
#define ll long long
using namespace std;

set<int> spf(ll a) {
    set<int> s;
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            s.insert(i);
            while (a % i == 0) {
                a /= i;
            }
        }
    }
    if (a > 1) {
        s.insert(a);
    }
    return s;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        set<int> x = spf(b);
        bool f = true;
        for (auto it : x) {
            if (a % it != 0) {
                f = false;
                break;
            }
        }
        if (f) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }
    return 0;
}
