#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;
    vector<pair<long long, int>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i + 1;
    }

    // Sort the array to use two-pointer technique
    sort(v.begin(), v.end());

    for (int i = 0; i < n - 2; i++) {
        long long target = x - v[i].first;

        int l = i + 1;
        int r = n - 1;

        while (l < r) {
            long long sum = v[l].first + v[r].first;
            if (sum == target) {
                cout << v[i].second << " " << v[l].second << " " << v[r].second << endl;
                return 0;
            } else if (sum < target) {
                l++;
            } else {
                r--;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
