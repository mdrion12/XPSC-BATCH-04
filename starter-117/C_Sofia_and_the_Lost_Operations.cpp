#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int m;
        cin >> m;
        vector<int> d(m);
        unordered_map<int, int> d_count;
        for (int i = 0; i < m; i++) {
            cin >> d[i];
            d_count[d[i]]++;
        }

        bool possible = true;
        unordered_map<int, int> needed;
        
        // Calculate needed modifications
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                needed[b[i]]++;
            }
        }

        // Check if we have enough in d to cover needed changes
        for (const auto& pair : needed) {
            if (d_count[pair.first] < pair.second) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}
