#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int h = stoi(s.substr(0, 2));
        int minute = stoi(s.substr(3, 2));

        string m = (h >= 12) ? "PM" : "AM";

        if (h > 12)
            h -= 12;
        else if (h == 0)
            h = 12;

        cout << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << minute << " " << m << endl;
    }

    return 0;
}
