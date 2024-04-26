#include<bits/stdc++.h>
using namespace std;

bool sub(const string& s, int x, const string& s1) {
    for (int i = 0; i <= s.size() - x; ++i) {
        string sub_s = s.substr(i, x); // Extract substring of length x starting from index i
        if (sub_s == s1) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        int l = 0, r = 0;
        int sum = 0;
        string s;
        while (r < s1.size()) {
            s += s1[r];
            if (sub(s, r - l + 1, s2)) {
                sum = max(sum, r - l + 1);
            } else {
                s.erase(0, 1);
                ++l;
            }
            ++r;
        }
        int res = s.size() + s2.size();
        cout << res - (sum * 2) << "\n";
    }
    return 0;
}
