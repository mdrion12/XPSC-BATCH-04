#include<bits/stdc++.h>
using namespace std;

int m(const vector<pair<int, int>>& sp) {
    int n = sp.size();
    int max_s = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int Ai = sp[i].first;
            int Vi = sp[i].second;
            int Aj = sp[j].first;
            int Vj = sp[j].second;
            int combined_strength = (Ai * Vj) + (Vi * Aj);
            max_s = max(max_s, combined_strength);
        }
    }

    return max_s;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> sp(n);

        for (int i = 0; i < n; ++i) {
            int V, A;
            cin >> V >> A;
            sp[i] = {A, V};
        }

        int result = m(sp);
        cout << result << "\n";
    }

    return 0;
}
