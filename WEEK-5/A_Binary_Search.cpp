#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    vector<int> v(a);
    for (int i = 0; i < a; i++) {
        cin >> v[i];
    }
    while (b--) {
        int x;
        cin >> x;
        int l = 0, r = v.size() - 1; // Corrected r to v.size() - 1
        bool f = false;
        while (l <= r) { // Changed the condition from l < r to l <= r
            int mid = l + (r - l) / 2; // Corrected mid calculation
            if (v[mid] == x) {
                f = true;
                break; // Added break to exit the loop once the element is found
            } else if (v[mid] < x) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if (f)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}
