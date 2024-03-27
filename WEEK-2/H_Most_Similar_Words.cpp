#include <bits/stdc++.h>
using namespace std;

int difference(vector<char>& x, vector<char>& y) {
    int ans = 0;
    for (int i = 0; i < x.size(); i++) {
        ans += abs(x[i] - y[i]);
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        vector<vector<char>> v; // Initializing vector v with size a x b

        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                cin >> v[i][j];
            }
        }

        int answer = INT_MAX;
        for (int i = 0; i < a - 1; i++) {
            for (int j = i + 1; j < a; j++) {
                answer = min(answer, difference(v[i], v[j]));
            }
        }
        cout << answer << "\n";
    }

    return 0;
}
