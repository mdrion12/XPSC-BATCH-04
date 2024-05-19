#include <bits/stdc++.h>
#define ll long long
using namespace std;

int findDivisor(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return i;
    }
    return n;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        
        if (l <= 3 && r <= 3) {
            cout << -1 << endl;
            continue;  // Continue to the next test case
        }
        
        if (r - l >= 1) {
            if (r % 2) r--;
            cout << r / 2 << " " << r / 2 << endl;
            continue;  // Continue to the next test case
        }
        
        if (findDivisor(l) == l) {
            cout << -1 << endl;
        } else {
            int divisor = findDivisor(l);
            cout << divisor << " " << l - divisor << endl;
        }
    }

    return 0;
}
