#include <bits/stdc++.h>
using namespace std;
int main() {
       ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int favorite_value = a[f - 1];

      
        sort(a.begin(), a.end(), greater<int>());

      
        int count_in_top_k = 0;
        int total_count = 0;

        for (int i = 0; i < k; i++) {
            if (a[i] == favorite_value) {
                count_in_top_k++;
            }
        }

        for (int i = 0; i < n; i++) {
            if (a[i] == favorite_value) {
                total_count++;
            }
        }

        if (count_in_top_k == 0) {
            cout << "NO" << endl;
        } else if (count_in_top_k == total_count) {
            cout << "YES" << endl;
        } else {
            cout << "MAYBE" << endl;
        }
    }

    return 0;
}
