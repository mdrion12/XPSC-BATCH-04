#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        int max_val = INT_MIN;
        for (int i = 0; i < a; i++) {
            int num;
            cin >> num;
            if (num > max_val) {
                max_val = num;
            }
        }
        cout << max_val << "\n";
    }
    return 0;
}
