#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int result = 0;

        if (a == 0 && b == 0) {
            result = 0; // No icons, no screens needed
        } else if (b < 2 && a < 7) {
            result = 1; // Only one screen needed for both icons
        } else if (b >= 2 && a == 0) {
            result = (b + 1) / 2; // Number of screens needed for 2x2 icons
        } else if (b == 0 && a >= 15) {
            result = (a + 14) / 15; // Number of screens needed for 1x1 icons
        } else {
            // Number of screens needed for 1x1 icons
            int screens_1x1 = (a + 6) / 7;

            // Number of screens needed for 2x2 icons
            int screens_2x2 = (b + 1) / 2;

            // Maximum of screens needed for both types of icons
            result = max(screens_1x1, screens_2x2);
        }

        cout << result << "\n";
    }
    return 0;
}
