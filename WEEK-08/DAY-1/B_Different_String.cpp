#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        
        // Sort the string
        string t = s;
        sort(t.begin(), t.end());
        
        if (s != t) {
            // If s is not equal to sorted t, print sorted t
            cout << "YES" << endl;
            cout << t << endl;
        } else {
            // If s is equal to sorted t, reverse sorted t
            reverse(t.begin(), t.end());
            if (s != t) {
                // If s is not equal to reversed t, print reversed t
                cout << "YES" << endl;
                cout << t << endl;
            } else {
                // If s is equal to reversed t, it's impossible to rearrange
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
