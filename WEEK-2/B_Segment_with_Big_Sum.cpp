#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

int main() {
    int a;
    long long b;
    cin >> a >> b;
    vector<int> v(a);
    for(int i = 0; i < a; i++) {
        cin >> v[i];
    }

    long long sum = 0;
    int ans = INT_MAX;
    int l = 0, r = 0;

    while (r < a) {
        sum += v[r];
        while (sum >= b) {
            ans = min(ans, r - l + 1);
            sum -= v[l];
            l++;
        }
        r++;
    }

    if (ans == INT_MAX) {
        cout << "-1\n";
    } else {
        cout << ans << "\n";
    }

    return 0;
}
